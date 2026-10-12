#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x=n;
        long long bestPrime=1;
        int count=0;
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                int cnt=0;
                while(x%i==0){
                    x/=i;
                    cnt++;
                }
                if(cnt>count){
                    count=cnt;
                    bestPrime=i;
                }
            }
        }
        if(x>1){
            if(count<1){
                bestPrime=x;
                count=1;
            }
        }
        cout<<count<<endl;
        for(int i=0;i<count-1;i++){
            cout<<bestPrime<<" ";
            n/=bestPrime;
        }
        cout<<n<<endl;
    }
    return 0;
}