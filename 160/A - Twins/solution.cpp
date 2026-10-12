#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    int coins=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        coins+=v[i];
    }
    sort(v.rbegin(),v.rend());
    int m=0,count=0;
    for(auto i:v){
        m+=i;
        count++;
        if(m>coins-m){
            break;
        }
    }
    cout<<count;
}