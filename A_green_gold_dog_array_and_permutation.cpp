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
    vector<pair<int, int>>max_permut;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        max_permut.push_back({x, i});
    }

    sort(max_permut.begin(), max_permut.end());
    int max_size = n;
    for (int i = 0; i < n; i++)
    {
        max_permut[i].first = max_size;
        max_size--;
    }

     vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v[max_permut[i].second] = v[i].first;
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
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