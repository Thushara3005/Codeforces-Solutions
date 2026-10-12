#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        if(m==1 && n==1){
            cout<<0<<endl;
        }
        else{
        cout<<(m+n-2)+min(m,n)<<endl;
        }
    }
  return 0;
}