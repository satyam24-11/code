#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                        \
  std::ios_base::sync_with_stdio(false); \
  std::cin.tie(NULL);
const int mod = 1000000007;

void answer()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a,a+n);
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    int ans=0;
    for (int j = 0; j < n; j++)
    {
      if (a[j] > i)
      {
        count++;
      }
      else ans++;
   
      }
      if(count==i){
        cout<<i<<endl;
        return;
      }     
  }
  cout<<-1<<endl;

}



int32_t main()
{
  make_fast;
  int t;
  cin >> t;
  while (t--)
  {
    answer();
  }
  return 0;
}