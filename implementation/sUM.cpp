#include <iostream>
using namespace std;

int SUM(int n){
    int sum = 1;
    if(n==1) return sum;
    sum = n +  SUM(n-1);
}
int main(){
    int n;cin>>n;
    cout<<SUM(n);
    return 0;

}
