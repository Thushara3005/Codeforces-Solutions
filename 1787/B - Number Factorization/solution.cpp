#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<pair<long long,long long>> v;
        long long x=n;
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                int cnt=0;
                while(x%i==0){
                    x/=i;
                    cnt++;
                }
                v.push_back({i,cnt});
            }
        }
        if(x>1){
            v.push_back({x,1});
        }
        long long ans=0;
        while(!v.empty()){
            long long mn=LLONG_MAX;
            for(auto i:v){
                mn=min(mn,i.second);
            }
            long long product=1;
            for(auto i:v){
                if(i.second>=mn){
                    product*=i.first;
                }
            }
            ans+=product*mn;
            vector<pair<long long, long long>> next;
            for(auto i:v){
                if(i.second>mn){
                    next.push_back({i.first,i.second-mn});
                }
            }
            v=next;
        }
        cout<<ans<<endl;
    }
    return 0;
}