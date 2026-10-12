#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long t;
   cin>>t;
   while(t--){
       long long n;
       cin>>n;
       long long ans=0;
       for(int i=3;;i+=2){
           long long c=(i*i+1)/2;
           if(c>n){
               break;
           }
           ans++;
       }
       cout<<ans<<endl;
       
   }
    return 0;
}