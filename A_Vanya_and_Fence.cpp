#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i] <= h)
        {
            sum += 1;
        }
        else
            sum += 2;
    }
   
    cout<<sum<<endl;

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
