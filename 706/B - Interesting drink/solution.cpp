#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int m;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        int low=0,high=n-1, ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=x){
                ans=mid+1;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}