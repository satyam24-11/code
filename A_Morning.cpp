#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='0'){
            v.push_back(10);
            //v.push_back('0');
        }
        else{
            v.push_back(s[i]-'0');
        }
    }
    int ans = abs(v[0] - 1) + abs(v[1] - v[0]) + abs(v[2] - v[1]) + abs(v[3] - v[2]);
    cout <<ans+4<< endl;
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