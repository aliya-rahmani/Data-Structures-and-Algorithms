// Longest Common Subsequence
// https://leetcode.com/problems/longest-common-subsequence/

class Solution {
public:
    int memoized(string &x,string &y, int m, int n,vector<vector<int>> &dp){
        if(m==0 || n==0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        if(x[n-1]==y[m-1]) return dp[m][n] = 1 + memoized(x,y,m-1,n-1,dp);
        else return dp[m][n] = max(memoized(x,y,m-1,n,dp),memoized(x,y,m,n-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m= text2.size();
        vector<vector<int>> dp(m+1, vector<int>(n + 1, -1));
        return memoized(text1,text2,m,n,dp);
    }
};
