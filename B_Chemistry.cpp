#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    ll tt = 1;
    cin >> tt;
    while (tt-- > 0)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n < k)
        {
            cout << "NO\n";
            continue;
        }
        ll kol = 0;
        map<char, ll> mp;
        for (auto x : s)
            mp[x]++;
        for (auto y : mp)
            kol += (y.second % 2);
        kol--;
        if (k < kol)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}