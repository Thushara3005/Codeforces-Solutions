#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int count=0;
    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<n;i++){
        if(prime[i]){
            for(int j=i*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> primes;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
    for(int i=0;i+1<primes.size();i++){
        int k=primes[i]+primes[i+1]+1;
        if(k<=n && prime[k]){
            count++;
        }
    }
    if(count>=t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}