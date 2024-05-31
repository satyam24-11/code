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
    string s;
    cin >> s;
    int n = s.length();
    // cout << n << endl;
    vector<int> freq(26);
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'A']++;
    }
    int cnt_odd = -1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] & 1)
        {
            if (cnt_odd != -1)
            {
                cout << "NO SOLUTION"
                     << "\n";
                return;
            }
            else
            {
                cnt_odd = i;
            }
        }
    }
   // dbg(freq, s);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i] / 2; j++)
        {
            cout << char(i + 'A');
        }
    }
    if (cnt_odd != -1)
    {
        cout<<char(cnt_odd + 'A');
    }
    for (int i = 25; i >= 0; i--)
    {
        for (int j = 0; j < freq[i] / 2; j++)
        {
            cout << char(i + 'A');
        }
    }
    //dbg(s);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    // }
    return 0;
}