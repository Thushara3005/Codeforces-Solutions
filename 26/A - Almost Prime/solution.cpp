#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int num=i;
        int curr=0;
        for(int j=2;j*j<=num;j++){
            if(num%j==0){
                curr++;
                while(num%j==0){
                    num/=j;
                }
        }
    }
    if(num>1){
            curr++;
        }
        if(curr==2){
            ans++;
        }
    }
    cout<<ans<<" ";
  return 0;
}