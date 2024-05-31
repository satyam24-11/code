
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int eaten = 0;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= k)
        {
            idx = i;
            break;
        }
    }
    // cout<<idx<<endl;
    int j = 0;
    for (int i = idx; i < n; i++)
    {
        if (v[i]-j >= k)
        {
            eaten++;
            j++;
        }
    }

    cout << eaten << endl;
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