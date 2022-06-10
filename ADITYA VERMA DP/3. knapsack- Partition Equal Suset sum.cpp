// https://leetcode.com/problems/partition-equal-subset-sum/submissions/

class Solution {
public:
    bool helper(vector<int> arr, int sum, int n){
        int ans[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) ans[i][j]=0;
                if(j==0) ans[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j) ans[i][j] = ans[i-1][j-arr[i-1]] || ans[i-1][j];
                else ans[i][j]=ans[i-1][j];
            }
        }
        return ans[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+= nums[i];
        }
        if(sum%2!=0) return false;
        return helper(nums,sum/2,n);
    }
};
