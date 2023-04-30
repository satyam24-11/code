#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp1;
    for (int i = 1; i <= n; i++)
    {
        mp1[i] = -1;
    }
    ll time = 1;
    ll dump = n;
    for (int i = 0; i < m; i++)
    {
        if (dump == 0)
            break;
        if (mp1.find(v[i]) == mp1.end())
        {
            mp1[v[i]] = 1;
            mp1[dump] = time;
            dump--;
        }
        time++;
    }
    for (auto it : mp1)
    {
        if (it.first <= n)

            cout << it.second << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}