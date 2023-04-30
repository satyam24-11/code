#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void answer()
{
  int n,k;
  cin>>n>>k;
  vector<string>s(n);
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  int maxi=1;
  for(int i=1;i<n;i++){
    if(s[i]==s[0]){
        maxi++;
    }
  }
  cout<<maxi<<endl;
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