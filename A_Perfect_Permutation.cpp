#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
    int n;
    cin >> n;
    int a[n];
    if (n & 1)
    {
        cout << "-1" << endl;
        return;
    }
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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
