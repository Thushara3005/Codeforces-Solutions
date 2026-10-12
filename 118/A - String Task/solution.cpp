#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int n=s.size();
    transform(s.begin(),s.end(), s.begin(),:: tolower);
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='u' && s[i]!='i' && s[i]!='y'){
            ans+=".";
            ans+=s[i];
        }
    }
    cout<<ans;
}