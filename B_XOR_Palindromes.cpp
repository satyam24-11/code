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
    cin >> s;
    string str;
    vector<int> ans(n + 1);

    int c = 0;
    int count_0 = 0;
    int count_1 = 0;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (s[i] != s[j]){
            c++;
        }
        if (s[i] == s[j] && (s[i] == '0')){
            count_0++;
        }
        else if (s[i] == s[j] && (s[i] == '1'))
            count_1++;
        i++;
        j--;
    }
    if (c == 0)
        ans[0] = 1;
    int vec = 0;
    if (n & 1)
        vec = 1;
    for (int i = 1; i <= n; i++)
    {
        if (c > i)
            continue;
        int diff= i - c;
        if ((diff > (count_0 * 2 + count_1 * 2) + vec))
            continue;

        if (diff & 1)
        {
            if (n % 2 == 0)
                continue;
            else
                ans[i] = 1;
        }
        else
            ans[i] = 1;
    }
    for (int i = 0; i <= n; i++){
        str.push_back((ans[i] + '0'));
    }
    cout << str << endl;

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