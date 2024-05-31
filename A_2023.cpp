#include "bits/stdc++.h"
using namespace std;

#define make_fast()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    ll prod = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        prod *= v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);

    if (2023 % prod == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << 2023 / sum << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
