class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int hi = a.size()-1;
        int lo = 0;
        while(hi>=lo){
            int mid = lo + (hi-lo)/2;
            if(a[mid]==t) return mid;
            else if(a[mid]>t) hi = mid - 1;
                 else lo = mid + 1;
        }
        return lo;
    }
};
