#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void answer()
{
   int arr_length, time;
   cin>>arr_length>>time;
   int arr1[arr_length],arr2[arr_length];
   for(int i=0;i<arr_length;i++){
    cin>>arr1[i];
   }
   for (int j = 0; j<arr_length; j++)
   {
    cin >> arr2[j];
   }
   int res=-1;
   for(int i=0;i<arr_length;i++){
    if(arr1[i]<=time-i){
        if(res==-1 || arr2[i]>arr2[res-1])
        res=i+1;
    }
   }
   cout<<res<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     int t;
      cin >> t;
      while (t--)
      {
    answer();
     }
    return 0;
}
