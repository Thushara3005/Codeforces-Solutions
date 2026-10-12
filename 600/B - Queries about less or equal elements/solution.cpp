#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n,m;
  cin>>n>>m;
  vector<int> a(n);
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  sort(a.begin(),a.end());
  while(m--){
      int x;
      cin>>x;
      int low=0,high=n-1;
      int ans=n;
      while(low<=high){
          int mid=(low+high)/2;
          if(a[mid]>x){
              ans=mid;
              high=mid-1;
          }
          else{
              low=mid+1;
          }
      }
      cout<<ans<<" ";
  }
  return 0;
}