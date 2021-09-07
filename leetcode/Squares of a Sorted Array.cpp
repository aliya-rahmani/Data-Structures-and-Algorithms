class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int l=0,r=nums.size()-1;
        while(r>=l){
            if(abs(nums[l])>=abs(nums[r])){
                ans.push_back(nums[l]*nums[l]);
                l++;
            }
            else if(abs(nums[l])<abs(nums[r])){
                ans.push_back(nums[r]*nums[r]);
                r--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
