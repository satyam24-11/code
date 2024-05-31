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
    vector<int> t, m;
    for (int i = 0; i < n;i++){
        if(s[i]=='T'){
            t.push_back(i);
        }else
            m.push_back(i);
    }
    if(t.size()/2!=m.size()){
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < m.size();i++){
        if(m[i]<t[i] || m[i]>t[i+m.size()]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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