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
