#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    int maximum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maximum = max(maximum,arr[i]);
    }
    cout<<maximum;
    return 0;

}