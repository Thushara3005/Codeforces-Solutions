#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s;
        cin>>s;
        bool ans=false;
        string text="codeforces";
        int i=0;
        int n=text.size();
        while(i!=n){
            if(text[i]==s){
                ans=true;
            }
            i++;
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