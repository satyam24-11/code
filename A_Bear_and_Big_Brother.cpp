#include <bits/stdc++.h> 
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
   int a,b;
   cin>>a>>b;
   int count=0;
  while(a<=b){
    a=3*a;
    b=2*b;
    count++;
  }
  cout<<count<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
  //  }
    return 0;
}
