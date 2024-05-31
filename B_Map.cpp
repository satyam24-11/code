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
    string s;
    // cin>>s;
    map<string, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (mpp[s] == 0)
        {
            cout << "OK" << endl;
            mpp[s]++;
        }
        else
        {
            cout << s << mpp[s] << endl;
            mpp[s]++;
        }
    }
}
int32_t main()
{
    make_fast;
    
    // while (t--)
    // {
    answer();
    // }
    return 0;
}