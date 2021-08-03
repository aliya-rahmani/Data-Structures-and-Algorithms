##Brute force
#1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
        if(nums[i]!=i){
            return i;
        }
        else if(nums[nums.size()-1]!=nums.size()){
            return nums.size();
        }
    }
    return 0;
    }
};

#2
// Method 2 (Use count array)
// Approach: 

// Create a temp array temp[] of size n with all initial values as 0.
// Traverse the input array arr[], and do following for each arr[i] 
// if(temp[arr[i]] == 0) temp[arr[i]] = 1;
// if(temp[arr[i]] == 1) output “arr[i]” //repeating
// Traverse temp[] and output the array element having value as 0 (This is the missing element)
// Time Complexity: O(n)

// Auxiliary Space: O(n)

#3

// Method 3 (Make two equations using sum and sum of squares)
// Approach:

// Let x be the missing and y be the repeating element.
// Let N is the size of array.
// Get the sum of all numbers using formula S = N(N+1)/2
// Get the sum of square of all numbers using formula Sum_Sq = N(N+1)(2N+1)/6
// Iterate through a loop from i=1….N
// S -= A[i]
// Sum_Sq -= (A[i]*A[i])
// It will give two equations 
// x-y = S – (1) 
// x^2 – y^2 = Sum_sq 
// x+ y = (Sum_sq/S) – (2) 
 
// Time Complexity: O(n) 

#4
//Most Optimal XOR Technique(https://florian.github.io/xor-trick/)
