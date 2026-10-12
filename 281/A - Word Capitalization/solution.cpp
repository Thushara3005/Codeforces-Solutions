#include<bits/stdc++.h>
using namespace std;
 
int main() {
    // int n;
    // cin>>n;
    // while(n--){
    //     string a;
    //     cin>>a;
    //     string c=a;
    //     reverse(c.begin(),c.end());
    //     if(a==c){
    //         cout<<"NO"<<endl;
    //     }
    //     else{
    //         cout<<"YES"<<endl;
    //         cout<<c<<endl;
    //     }
    // }
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     string s;
    //     cin>>n>>s;
    //     bool ans=true;
    //     for(int i=1;i<n;i++){
    //         if(isalpha(s[i-1]) && isdigit(s[i])){
    //             ans=false;
    //         }
    //         if(s[i-1]>s[i]){
    //             ans=false;
    //         }
    //     }
    //     if(ans){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }
    // int t;
    // cin>>t;
    // while(t--){
    //     string s;
    //     cin>>s;
    //     if(s.size()%2==1){
    //         cout<<"NO"<<endl;
    //     }
    //     else{
    //         int a=s.size()/2;
    //         string k=s.substr(0,a);
    //         string p=s.substr(a,s.size());
    //         if(k==p){
    //             cout<<"YES"<<endl;
    //         }
    //         else{
    //             cout<<"NO"<<endl;
    //         }
    //     }
    // }
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int count=0;
//     for(int i=1;i<n;i++){
//         if(s[i]==s[i-1]){
//             count++;
//         }
//     }
//   cout<<count;
    // string s;
    // cin>>s;
    // int n=s.size();
    // int u=0,l=0;
    // for(int i=0;i<n;i++){
    //     if(isupper(s[i])){
    //         u++;
    //     }       
    //     else{
    //         l++;
    //     }
    // }
    // if(u>l){
    //     transform(s.begin(), s.end(), s.begin(),:: toupper);
    // }
    // else{
    //     transform(s.begin(), s.end(), s.begin(),:: tolower);
    // }
    // cout<<s;
    
    string s;
    cin>>s;
    s[0]=toupper(s[0]);
    cout<<s;
    
 
  return 0;
}