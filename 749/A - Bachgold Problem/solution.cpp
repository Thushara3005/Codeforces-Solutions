// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<pair<long long,long long>> v;
//         long long x=n;
//         for(long long i=2;i*i<=x;i++){
//             if(x%i==0){
//                 int cnt=0;
//                 while(x%i==0){
//                     x/=i;
//                     cnt++;
//                 }
//                 v.push_back({i,cnt});
//             }
//         }
//         if(x>1){
//             v.push_back({x,1});
//         }
//         long long ans=0;
//         while(!v.empty()){
//             long long mn=LLONG_MAX;
//             for(auto i:v){
//                 mn=min(mn,i.second);
//             }
//             long long product=1;
//             for(auto i:v){
//                 if(i.second>=mn){
//                     product*=i.first;
//                 }
//             }
//             ans+=product*mn;
//             vector<pair<long long, long long>> next;
//             for(auto i:v){
//                 if(i.second>mn){
//                     next.push_back({i.first,i.second-mn});
//                 }
//             }
//             v=next;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
 
// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<long long> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         long long k=v[0]*v[n-1];
//         vector<long long> ans;
        
//         for(long long i=2;i*i<=k;i++){
//             if(k%i==0){
//                 ans.push_back(i);
//                 if (i != k / i) {
//                     ans.push_back(k / i);
//                 }
//             }
//         }
//         sort(ans.begin(),ans.end());
//         if(ans==v){
//             cout<<k<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
//     }
//     return 0;
// }
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n,t;
    // cin>>n>>t;
    // int count=0;
    // vector<bool> prime(n+1,true);
    // prime[0]=false;
    // prime[1]=false;
    // for(int i=2;i*i<n;i++){
    //     if(prime[i]){
    //         for(int j=i*i;j<n;j+=i){
    //             prime[j]=false;
    //         }
    //     }
    // }
    // vector<int> primes;
    // for(int i=2;i<=n;i++){
    //     if(prime[i]){
    //         primes.push_back(i);
    //     }
    // }
    // for(int i=0;i+1<primes.size();i++){
    //     int k=primes[i]+primes[i+1]+1;
    //     if(k<=n && prime[k]){
    //         count++;
    //     }
    // }
    // if(count>=t){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    else{
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
    }
    return 0;
}