#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void answer()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end(),greater<int>());
//   for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
  int answer = INT_MIN;
  for (int i = 0; i < n-1 ; i++)
  {
    // if (n == 2)
    // {
    //     answer = v[i] * v[i + 1];
    //     break;
    // }
    // else
    // {
    //     answer = v[i] * v[i + 1];
    // }
    answer = v[i] * v[i + 1];
  }
  cout << max(answer,v[0]*v[1]) << endl;
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
