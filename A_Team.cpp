#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
    string s;
    cin >> s;
    int count_officer = 0;
    for (int i = 0; i < s.length(); i++)
    {
        count_officer=(count_officer*10+(s[i]-'0'))%20;
    }
    cout<<count_officer<<endl;
}

int32_t main()
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
