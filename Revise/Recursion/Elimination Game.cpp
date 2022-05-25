// https://leetcode.com/problems/elimination-game/

class Solution {
public:
    int lastRemaining(int n) {
        if(n==1) return 1;
        return 2*(n/2 - lastRemaining(n/2) + 1);
    }
};
//we noted certain patterns in the elimination game
// first thing, that 2k and 2k+1 elements have same result
// Also, for ex, 1 2 3 4 5 6 7 8
//       becomes   2   4   6   8 i.e. 2* ( 1 2 3 4) but this time elimination is from right
//       so it becomes left(2k) = 2*right(k)
// third, the elements from left elimination is at same position as that of right elimination
//       which gives left(k) - 1 =  k-right(k)
// Equating these, we get the answer
