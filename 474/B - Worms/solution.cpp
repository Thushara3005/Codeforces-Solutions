#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0){
            arr[i]=x;
        }
        else{
            arr[i]=arr[i-1]+x;
        }
    }
    int m;
    cin>>m;
    vector<int> ans;
    while(m--){
        int c;
        cin>>c;
        int k=lower_bound(arr.begin(),arr.end(),c)-arr.begin();
        ans.push_back(k);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]+1<<endl;
    }
    
    return 0;
}