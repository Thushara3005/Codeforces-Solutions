#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int MAX = 1000000; 
    vector<bool> temp(MAX+1,true);
    temp[0]=temp[1]=false;
    int count=0;
    for(int i=2;i*i<=MAX;i++){
        if(temp[i]){
            for(int j=i*i;j<=MAX;j+=i){
                temp[j]=false;
            }
        }
    }
    for(auto i:v){
        long long root=sqrt(i);
        if(root*root==i && temp[root]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        
    return 0;
}