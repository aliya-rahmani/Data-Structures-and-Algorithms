#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd = a[1] - a[0];
    int cd=2,ml=2;
    for(int i=2;i<n;i++){
        
        if(pd==(a[i]-a[i-1])){
            cd++;
        }
        
        else{
            pd=(a[i]-a[i-1]);
            cd=2;
        }
        
        ml=max(ml,cd);
        
        
    }
    cout<<ml<<endl;

    return 0;
}