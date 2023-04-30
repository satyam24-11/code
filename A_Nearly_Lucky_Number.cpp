#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
    char s;
    int cnt=0;
    while(cin>>s){
        if(s=='4'||s=='7')
        cnt++;
    }
    if(cnt==4 || cnt==7)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
   
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //  int t;
    //  cin >> t;
    //  while (t--)
    //  {
    solution();
    //  }
    return 0;
}
