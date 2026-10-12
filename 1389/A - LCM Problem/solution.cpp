#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n*2<=m){
            cout<<n<<" "<<2*n<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}