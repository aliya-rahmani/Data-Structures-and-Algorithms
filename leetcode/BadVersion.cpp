class Solution {
public:
    int firstBadVersion(int n) {
        int hi = n-1;
        int lo = 0;
        
        while(hi>=lo){
            int mid  = lo + (hi-lo)/2;
            if(isBadVersion(mid)) hi = mid -1;
            else if(!isBadVersion(mid))lo = mid + 1;
        }
        return lo;
    }
};
