#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    a[n] = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxima=-1,days=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>maxima && a[i]>a[i+1]){
            days++;
        }
        maxima = max(a[i],a[i-1]);
    }
    cout<<days;

    return 0;
}
