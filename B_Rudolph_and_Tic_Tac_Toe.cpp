#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    string ans = "DRAW";
    for (int i = 0; i < 3; i++)
        if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.')
            ans = v[i][0];
    for (int i = 0; i < 3; i++)
        if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.')
            ans = v[0][i];
    if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.')
        ans = v[0][0];
    if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.')
        ans = v[0][2];
    cout << ans << endl;
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