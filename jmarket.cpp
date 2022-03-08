#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,a[3];
        cin>>x>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<(x-1)*a[0]+a[1]<<endl;

    }
    return 0;
}