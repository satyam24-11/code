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
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << "1 " << v[0] << endl;
    if (v[n - 1] > 0)
    {
        cout << "1 " << v[n - 1] << endl;
        cout << n - 2;
        for (int i = 1; i < n - 1; i++)
            cout << " " << v[i];
        }
        else
        {
            cout << "2 " << v[1] << " " << v[2] << endl;
            cout << n - 3;
            for (int i = 3; i < n; i++)
                cout << " " << v[i];
        }
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