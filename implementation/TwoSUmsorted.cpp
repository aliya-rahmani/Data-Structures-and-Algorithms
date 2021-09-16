class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int mid = numbers.size()/2;
        for(int i=0; i<numbers.size(); i++){
            if(binary_search(numbers.begin()+i+1, numbers.end(), target - numbers[i])){
                auto it = lower_bound(numbers.begin()+i+1, numbers.end(), target - numbers[i]);
                const int n = it-numbers.begin()+1;
                return {i+1 , n};
            }        
        }
        return {};
    }
};
