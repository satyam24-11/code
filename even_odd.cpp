#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    int diff;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++)
         diff=abs(a[i]-a[j])-abs(a[k]-a[j]);
        v.push_back(diff);
      }
    }
   
    sort(v.begin(),v.end());
    //  for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1])
            count++;
    }
 
    // int count=0;
    // for(int i=0;i<v.size()-1;i++){
    //     if(v[i]==v[i+1]){
    //         count++;
    //     }
    //     else break;
    // }
   
    // }
    if(count>0){
        cout<<"no"<<endl;
    }
    else cout<<"yes"<<endl;

  
}



int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    make_fast;
    int t;
    cin >> t;
    while (t--)
    {
        answer();
    }
    return 0;
}