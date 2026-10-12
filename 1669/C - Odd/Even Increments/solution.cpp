#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int odd=ans[0]%2;
        int even=ans[1]%2;
        bool possible=true;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(ans[i]%2!=odd){
                    possible=false;
                }
            }
            else{
                if(ans[i]%2!=even){
                    possible=false;
                }
            }
        }
        if(possible==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        
    }
}