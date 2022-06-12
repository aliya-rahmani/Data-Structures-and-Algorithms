//numbers of coin needed for making it change
//maximum no. of ways to make amount from the given dominations
class Solution {
public:
    int helper(vector<int>& arr, int n,int w){
        int dp[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][w];
        
    }
    int coinChange(vector<int>& coins, int amount) {
        
        return helper(coins,coins.size(),amount);
    }
};
