
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==2) return nums[0];
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
               return nums[i];
            }
        }
        return 0;
        
    }
};.
    
    
//2
class Solution {
public:

int findDuplicate(vector<int>& arr) {
    int n = arr.size(), i = 0;
    while(i < n - 1)
    {
        if(arr[arr[0]] != arr[0])
            swap(arr[0], arr[arr[0]]);
        else
            return arr[0];
    }
    return arr[0];
}
};
