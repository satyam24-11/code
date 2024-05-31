#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    int len = n - 1;
    set<int> st;
    bool flag = true;
    for (int i = 0; i < k; i++)
    {
        if (st.count(len))
        {
            break;
        }
        if (v[len] > n)
        {
            flag = false;
            break;
        }
        st.insert(len);
        len = (len - v[len] + n) % n;
    }
    //cout << (ok ? "Yes" : "No") << endl;
    if(flag){
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
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