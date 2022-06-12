// https://leetcode.com/problems/coin-change/


class Solution {
public:
    int helper(vector<int>& arr, int n,int w){
        int dp[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(j==0) dp[i][j]=0;
                if(i==0) dp[i][j]=INT_MAX-1;//we need infinite number of coins from an empty sack to make it j with some values                
            }
        }
        for(int j=1;j<w+1;j++){//if we get amount in multiple of first coin then we simply store the division of the coin
            if(j%arr[0]==0) dp[1][j]=j/arr[0];
            else dp[1][j]=INT_MAX-1;
        }
        for(int i=2;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(j>=arr[i-1]){
                    dp[i][j] = min(1 + dp[i][j - arr[i - 1]],0 + dp[i - 1][j]);//adding 1 coin when we are including that coin;
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        // getting max value at the end block means no possible answers are there
        return dp[n][w]== INT_MAX - 1 ? -1 : dp[n][w];
        
    }
    int coinChange(vector<int>& coins, int amount) {
        
        return helper(coins,coins.size(),amount);
    }
};
