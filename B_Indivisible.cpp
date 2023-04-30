#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void answer()
{
   int n;
   cin>>n;
   if(n==1){
    cout<<1<<endl;
   }
    else if(n&1){
   cout<<-1<<endl;
    }
    else {
        for(int i=2;i<=n;i+=2){
          cout<<i-1<<" "<<i<<" ";
          
        }
        cout<<endl;
    }
   
    
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