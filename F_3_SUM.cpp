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
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    int i = 0, j = 1, k = 2;
    while(k!=n){
        sum = v[i] + v[j] + v[k];
        if(sum>=100 && sum<1000){
           // cout << sum << endl;
            cout<<"YES"<<endl;
            return;
        }
        else{
            i++;
            j++;
            k++;
        
        }
    }
    cout << "NO" << endl;
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