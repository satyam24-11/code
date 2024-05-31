#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mpp1, mpp2;
    vector<int> v(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // mpp1[v[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
        // mpp2[v[i]]++;
    }
    int count = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v[i] == v2[j])
        {
            int ai_cnt = 1, bj_cnt = 1;
            while (i + 1 < n && v[i] == v[i + 1])
            {
                ai_cnt++;
                i++;
            }
            while (j + 1 < m && v2[j] == v2[j + 1])
            {
                bj_cnt++;
                j++;
            }
            count += (ai_cnt * bj_cnt);
            i++;
            j++;
        }
        else if (v[i] > v2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << count << endl;
}
int32_t main()
{
    make_fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    answer();
    // }
    return 0;
}
