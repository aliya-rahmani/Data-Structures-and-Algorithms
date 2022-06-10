// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/#



class Solution{

  public:
    vector<int> subsetsum(int nums[], int n, int sum){
        bool ans[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) ans[i][j]=false;
                if(j==0) ans[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum;j++){
                if(nums[i-1]<=j) ans[i][j] = ans[i-1][j-nums[i-1]] || ans[i-1][j];
                else ans[i][j] =ans[i-1][j];
            }
        }
        vector<int> res;
        for(int i=0;i<=sum/2;i++){
            if(ans[n][i]==true) res.push_back(i);
        }
        return res;
        
    }
	int minDifference(int nums[], int n)  { 

        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        vector<int> ans = subsetsum(nums,n,sum);
        int mn=INT_MAX;
        for(int i=0;i<ans.size();i++){
            mn = min(mn, abs(sum - 2*ans[i]));
        }
        return mn;
	}
	
};
