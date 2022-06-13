// Maximum Length of Repeated Subarray
// https://leetcode.com/problems/maximum-length-of-repeated-subarray/
class Solution {
public:
    int tabulation(vector<int>& x,int n, vector<int>& y, int m){
        vector<vector<int>> dp(n+1, vector<int> (m+1));
        int ans=INT_MIN;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0) dp[i][j] = 0;
                else { 
                    if(x[i-1]==y[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                    else dp[i][j]=0;
                    ans = max(ans,dp[i][j]);
                }
            }
        }
        
        return ans;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        return tabulation(nums1,n,nums2,m);
    }
};
