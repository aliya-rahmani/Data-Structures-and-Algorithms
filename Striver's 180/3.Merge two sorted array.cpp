class Solution{
    public:
    
    int Nextgap(gap){
      if(gap<=1)
        return 0;
      return (gap/2) + (gap%2);//ceiling for odds 
    }


    void merge(int* arr1, int* arr2, int n, int m){
      int i,j,gap=m+n;
      for(gap = Nextgap(gap);gap>0; gap=Nextgap(gap)){
        //swapping in the first array and sorting it
        for(i=0; i+gap<n; i+=gap){
          if(arr1[i]>arr1[i+gap])
            swap(arr1[i],arr1[i+gap]);
        }
        //swapping among both arrays  
        for(j=gap>n?gap-n:0; i < n && j < m; i++, j++){
          if(arr1[i]>arr2[j]
             swap(arr1[i],arr2[j]);
        }
        //swapping in the second array and sorting it
        if(j<m){
          for(j=0; j+gap<m; j+=gap){
            if(arr2[j]>arr2[j+gap])
               swap(arr2[j],arr2[j+gap]);
        
        }     
                      
      }
}







































};
