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
    cin>>n;
    string s;
    cin>>s;
    string s1;
    int first = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[first])
        {
            s1 += s[first];
            first = i + 1;
            i++;
        }
    }
    cout << s1 << endl;
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