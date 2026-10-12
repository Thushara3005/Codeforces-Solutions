#include<bits/stdc++.h>
using namespace std;
 
bool isprime(long long n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
int main() {
  int n;
  cin>>n;
  while(n--){
      int d;
      cin>>d;
      long long p=d+1;
      while(!(isprime(p))){
          p++;
      }
      long long q=p+d;
      while(!(isprime(q))){
          q++;
      }
      cout<<p*q<<endl;
  }
  return 0;
}