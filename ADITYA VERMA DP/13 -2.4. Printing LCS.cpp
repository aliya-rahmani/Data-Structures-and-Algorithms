
// Printing LCS
// Here, we can't use push_back in the loop itself due to leet delete example, it won't take subsequence it'll take recurrences
void tabulation(string &x,string &y, int m, int n){
        vector<vector<int>> dp(m+1, vector<int>(n + 1));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(y[i-1]==x[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        string s;
        int i=m,j=n;
        while(i>0 && j>0){
            if(y[i-1]==x[j-1]){
                s+=x[j-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]) i--;
                 else j--;
        }
        reverse(s.begin(),s.end());
        cout<<s;
    }
