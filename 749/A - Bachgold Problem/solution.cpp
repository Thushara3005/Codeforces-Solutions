#include<bits/stdc++.h>
using namespace std;
 
int main() {
//   int n;
//   cin>>n;
//   vector<long long> p;
//   for(int i=0;i<n;i++){
//       long long k;
//       cin>>k;
//       p.push_back(k);
//   }
//   int MAX=1000000;
//   vector<bool> v(MAX+1, true);
//   v[0]=v[1]=false;
//   for(int i=2;i*i<=MAX;i++){
//       if(v[i]){
//           for(int j=i*i;j<=MAX;j+=i){
//               v[j]=false;
//           }
//       }
//   }
//   for(long long i:p){
//       long long root=sqrt(i);
//       if(root*root==i && v[root]){
//           cout<<"YES"<<endl;
//       }
//       else{
//           cout<<"NO"<<endl;
//       }
//   }
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n/2-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
  return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 