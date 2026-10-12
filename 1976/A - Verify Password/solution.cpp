#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool ans=true;
        for(int i=1;i<n;i++){
            if(isalpha(s[i-1]) && isdigit(s[i])){
                ans=false;
            }
            if(s[i-1]>s[i]){
                ans=false;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
  
  
  return 0;
}