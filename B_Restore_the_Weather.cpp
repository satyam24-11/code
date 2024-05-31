#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    int b[n];
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }
    sort(b, b + n);
        int c[n];
    for (int i = 0; i < n; i++)
    {
        c[v[i].second] = b[i];
    }
    for (int i = 0; i < n;i++){
        cout << c[i] << " ";

    }
    cout << endl;
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