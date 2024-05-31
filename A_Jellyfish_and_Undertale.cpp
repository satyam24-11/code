#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int a,b,n;
    cin>>a>>b>>n;
    int ar[n];
    int sum = b;
    int count = 0;
    int c = 0;
    for (int i = 0; i < n;i++){
        cin >> ar[i];
    }
    for (int i = 0; i < n;i++){
        sum += min(a, ar[i] + 1);
        sum = sum - 1;
    }
    cout << sum << endl;  
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