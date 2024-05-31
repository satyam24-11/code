#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i]){
            count++;
        }
        else {
            count=0;
            break;
        }
    }
    if(count>0){
        sort(arr,arr+n);
    }
    for(int i=0;i<n;i++){
        
    }

}