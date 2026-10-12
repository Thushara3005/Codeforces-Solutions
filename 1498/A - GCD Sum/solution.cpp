#include <bits/stdc++.h>
using namespace std;
 
int digit(long long n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(gcd(n,digit(n))==1){
            n++;
        }
        cout<<n<<endl;
    }
    
    return 0;
}