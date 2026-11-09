#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int last=1;
        cout<<last<<" ";
        for(int i=1;i<a;i++){
            if (last + i + (a - i - 1) <= b) {
                last+=i;
            }
            else{
                last+=1;
            }
            cout<<last<<" ";
        }
        cout<<endl;
    }
  return 0;
}