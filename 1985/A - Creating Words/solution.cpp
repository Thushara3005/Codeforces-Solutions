#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        char f=a[0];
        char s=b[0];
        a[0]=s;
        b[0]=f;
        cout<<a<<" "<<b<<endl;
    }
  
  return 0;
}