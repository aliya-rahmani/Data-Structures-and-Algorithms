// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1/

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapsackRecursive(int W, int wt[], int val[], int n, vector<vector<int>> &k) 
    { 
       // Your code here
       
       if(n==0 || W==0) return 0;
       if(k[W][n]!=-1) return k[W][n];
       if(wt[n-1]<=W) return k[W][n] = max((val[n-1] + knapsackRecursive(W-wt[n-1],wt,val,n-1,k)), knapsackRecursive(W,wt,val,n-1,k));
       else {
           if(wt[n-1]>W) return k[W][n] = knapsackRecursive(W,wt,val,n-1,k);
           
       }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
        vector<vector<int>> dp(W+1, vector<int>(n + 1, -1));
        return knapsackRecursive(W, wt, val, n, dp);
    }
    
};
