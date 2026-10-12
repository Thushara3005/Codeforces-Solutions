#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> b(n);
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=lcm(a[i-1], a[i]);
        }
        bool ok= true;
        for(int i=0;i<n-1;i++){
            if(gcd(b[i+1], b[i])!=a[i]){
                ok=false;
                break;
            }
        }
        cout<<((ok)?"YES":"NO")<<endl;
    }
    return 0;
}