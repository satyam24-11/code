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

    vector<int> v(n + 1), v1(n + 1), v2(2 * n + 1), v3(2 * n + 1);
    int cnt=1;
    for (int i = 1;i<=n;i++){
        cin>>v[i];
        if(v[i-1]==v[i]){
            cnt++;
        }
        else{
                cnt = 1;
            }
            if(v2[v[i]]<cnt){
                v2[v[i]] = cnt;
        }
    }
    cnt=1;
    for (int i = 1;i<=n;i++){
        cin >> v1[i];
        if (v1[i - 1] == v1[i])
        {
                cnt++;
        }
        else
        {
                cnt = 1;
        }
        if (v3[v1[i]] < cnt)
        {
                v3[v1[i]] = cnt;
        }
    }
    int ans=0;
    for (int i = 1;i<=n;i++){
        if(ans<v2[v[i]]+v3[v[i]]){
            ans = v2[v[i]] + v3[v[i]];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (ans < v2[v1[i]] + v3[v1[i]])
        {
            ans = v2[v1[i]] + v3[v1[i]];
        }
    }
    cout << ans << endl;
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