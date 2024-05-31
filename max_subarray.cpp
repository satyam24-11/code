#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000007;
class solution{
  public:
  int maxSubarraySum(int arr[], int n){
    int max_so_far=INT_MIN;
    int max_ending_here=0;
    for(int i=0;i<n;i++){
      max_ending_here+=arr[i];
      if(max_so_far<max_ending_here){
        max_so_far=max_ending_here;
      }
      if(max_ending_here<0){
        max_ending_here=0;
      }
    }
    return max_so_far;
  }
};

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    solution ob;
    cout<<ob.maxSubarraySum(a,n)<<endl;
  }
  return 0;
}