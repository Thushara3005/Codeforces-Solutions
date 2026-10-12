#include <bits/stdc++.h>
using namespace std;
 
bool check(long long n){
    for(long long i=1;i*i*i<=n;i++){
        long long low=1, high=10000;
        long long r=n-i*i*i;
        while(low<=high){
            long long mid=(low+high)/2;
            long long k=mid*mid*mid;
            if(k==r){
                return true;
            }
            else if(k<r){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
        return false;
}
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        if(check(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}