// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
       bool a[arr.size()+1][sum+1];
       for(int i =0;i<arr.size()+1;i++){
           for(int j =0;j<sum+1;j++){
               if(i==0){
                   a[i][j] =false;
               }
               if(j==0){
                   a[i][j] = true;
               }
           }
       }
       for(int i =1;i<arr.size()+1;i++){
           for(int j =1;j<sum+1;j++){
               if(arr[i-1]<=j){
                   a[i][j] = a[i-1][j-arr[i-1]] || a[i-1][j];
               }else{
                   a[i][j] = a[i-1][j];
               }
           }
       }
       return a[arr.size()][sum];
   }
};
