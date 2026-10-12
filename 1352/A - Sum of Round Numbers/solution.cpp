#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int temp=n;
        int place=1;
        while(temp>0){
            int digit=temp%10;
            if(digit!=0){
                ans.push_back(digit*place);
            }
            temp/=10;
            place*=10;
        }
        cout<<ans.size()<<endl;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}