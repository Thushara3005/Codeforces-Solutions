#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        vector<long long> v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        long long pref=0,res=0;
        for(int i=0;i<n-1;i++){
            pref+=v[i];
            long long suffix=sum-pref;
            res=max(res, gcd(pref,suffix));
        }
        cout<<res<<endl;
    }
    return 0;
}