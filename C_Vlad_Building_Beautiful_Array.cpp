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
    // int a[n];
    bool flag = false;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] % 2) != (a[i + 1] % 2))
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "YES" << endl;
    }
    else
    {
        int mini = *min_element(a.begin(), a.end());
       // cout << mini << endl;
        if (mini % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
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