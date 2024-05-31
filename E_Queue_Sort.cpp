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
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int mini = *min_element(v.begin(), v.end());
    int min_idx = -1;
    for (int i = 0; i < n;i++){
        if(v[i]==mini){
            min_idx = i;
            break;
        }
    }
    if(min_idx==n-1){
        cout << min_idx << endl;
        return;
    }
    for (int i = min_idx; i < n-1;i++){
        if(v[i]>v[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << min_idx << endl;
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