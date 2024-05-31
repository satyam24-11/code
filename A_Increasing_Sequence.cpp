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
    vector<int> v(n);
    int maxi = INT_MIN;
    int maping[50000];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maping[v[i]]++;
    }
    vector<int> res;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == j)
        {
            res.push_back(j + 1);
            j += 2;
        }
        else{
            res.push_back(j);
        j += 1;
        }
    }
    int ans = res.size() - 1;
    cout << res[ans] << endl;
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