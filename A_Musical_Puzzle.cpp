#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                       \
std::ios_base::sync_with_stdio(false); \
std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    set<pair<char, char>> s1;
    for (int i = 0; i < n - 1;i++){
        char p, q;
        p = s[i];
        q = s[i + 1];
        s1.insert({p, q});
    }
    cout << s1.size() << endl;
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