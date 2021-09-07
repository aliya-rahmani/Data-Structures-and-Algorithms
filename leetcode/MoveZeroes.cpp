class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i=0,j=i+1;
        while(i<j && j<a.size()){
             if(a[i]==0 && a[j]!=0) swap(a[i++],a[j++]);
             else  if(a[i]==0 && a[j]==0)j++;
                   else {
                       i++;
                       j++;}
         }
      
    }
};
