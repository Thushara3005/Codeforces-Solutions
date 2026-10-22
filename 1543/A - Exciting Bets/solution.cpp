#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long d=abs(a-b);
        long long r=min(a,b)%d;
        long long moves=min(r,d-r);
        cout<<d<<" "<<moves<<endl;
    }
    return 0;
}