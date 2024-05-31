#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,q;
    cin >> n >> q;
    vector<int> v(n),pre(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n;i++){
      
            pre[i] = v[i];
            if(i>0)
                pre[i] += pre[i - 1];
        }
        while (q--)
        {
            int x;
            cin >> x;
            int ans = -1;
            int left = 1;
            int right = n;
            while (left <= right)
            {
                int mid = (left + right) / 2;
                if (pre[mid - 1] >= x)
                {
                    ans = mid;
                    right = mid - 1;
                }
                else{
                left = mid +1;
            } 
        }
        cout << ans << endl;
    }
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