#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long k=v[0]*v[n-1];
        vector<long long> ans;
        
        for(long long i=2;i*i<=k;i++){
            if(k%i==0){
                ans.push_back(i);
                if (i != k / i) {
                    ans.push_back(k / i);
                }
            }
        }
        sort(ans.begin(),ans.end());
        if(ans==v){
            cout<<k<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}