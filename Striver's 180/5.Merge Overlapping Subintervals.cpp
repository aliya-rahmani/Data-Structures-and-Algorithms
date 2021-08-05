//Brute force approach
// -Ask for sorting
// -Sort intervals(time complexity O(nlogn)
// -Compare each interval with other and merge accordingly O(n2)



//EFFICIENT APPROACH USING VECTOR IN VECTOR

class Solution {
public:
   
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedintervals;
        if(intervals.size()==0){
            return mergedintervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tempintervals = intervals[0];
        for(auto it:intervals){
            if(tempintervals[1]>=it[0]){
                tempintervals[1] = max(it[1],tempintervals[1]);
            }
            else{
                mergedintervals.push_back(tempintervals);
                tempintervals =it;
            }
            
        }
        mergedintervals.push_back(tempintervals);
        return mergedintervals;
    }
};
