#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
 int n;
 cin>>n;
 int a[n];
 float sum=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
 }
 cout<<sum/n<<endl;

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
