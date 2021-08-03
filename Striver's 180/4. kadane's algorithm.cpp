class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ending=0, max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            max_ending+=nums[i];
            
            if(max_ending>max_sum){
                max_sum =max_ending;}
            
            if(max_ending<0){
                max_ending=0;}
        }
        
        return max_sum;
    }
};

//DP

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ending=nums[0], max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            
            max_ending=max(nums[i],max_ending+nums[i]);
            max_sum = max(max_ending,max_sum);
        }
        
        return max_sum;
    }
};
