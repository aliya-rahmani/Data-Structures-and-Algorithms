//Rod cutting problem
// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1/#
class Solution{
  public:
    int helper(int price[],int n,int arr[]){
        int dp[n+1][n+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=0;// can't be one as it is not a subset it's either something or none 
                // because we are talking about rod a physical piece.
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = max(price[i-1] + dp[i][j-arr[i-1]], dp[i-1][j]);
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][n];
        
    }
    int cutRod(int price[], int n) {
        //code here
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i] = i+1;
        }
        return helper(price,n,arr);
    }
};
