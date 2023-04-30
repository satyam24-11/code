#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ya cout << "YES" << endl;
#define na cout << "NO" << endl;
void solution()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll sum = 1;
    if (a[0] != 1)
    {
        na;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= sum)
        {
            sum += a[i];
            continue;
        }
        else
        {
            na;
            return;
        }
    }
    ya;
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