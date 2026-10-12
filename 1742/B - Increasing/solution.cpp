#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int> ans(x);
        for(int i=0;i<x;i++){
            cin>>ans[i];
        }
        set<int> s;
        for(int i=0;i<x;i++){
            s.insert(ans[i]);
        }
        if(s.size()==x){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}