#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    cin >> n;
    vector<int> res_prm(n);
    for (int i = 0; i < n; i++)
    {
        cin >> res_prm[i];
    }
    // next_permutation(v.begin(), v.end());
    // for (int i = 0; i < n;i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    int a1 = 0, a2 = 0, a3 = 0, i = 0;
    for (int itt : res_prm)
    {
        if (itt == 1)
        {
            a1 = i;
        }
        else if (itt == 2)
        {
            a2 = i;
        }
        else if (itt == n)
        {
            a3 = i;
        }
        i++;
    }

    if (a3!= 0 && a3 != n - 1)
    {
        if (a1 < a3)
        {
            cout << a2 + 1 << " " << a3 + 2 << endl;
        }
        else
        {
            cout << a2+ 1 << " " << a3 << endl;
        }
    }
    else
    {
        if (a3< a1 && a2 < a1)
        {
            cout << a2 + 1 << " " << a3 + 1 << endl;
        }
        else if (a3 > a1 && a2 > a1)
        {
            cout << a2 + 1 << " " << a3 + 1 << endl;
        }
        else
        {
            cout << a1 + 1 << " " << a3 + 1 << endl;
        }
    }
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