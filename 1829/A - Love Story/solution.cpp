#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        string text="codeforces";
        int i=0;
        int n=text.size();
        while(i!=n){
            if(text[i]!=s[i]){
                ans++;
            }
            i++;
        }
        cout<<ans<<endl;
    }
  
  return 0;
}