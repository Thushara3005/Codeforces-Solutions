#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int s=a.size();
        if(s<=10){
            cout<<a<<endl;
        }
        else{
            char f=a[0], l=a[s-1];
            cout<<f+to_string(s-2)+l<<endl;
        }
    }
 
  return 0;
}