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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v1;
    int count_even = 0;
    int count_odd = 0;
    int pos_even = 0;
    int pos_odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            count_even++;
        }
        else {
            count_odd++;
        }

    }
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    if(count_even<count_odd){
        for (int i = 0; i < n;i++){
            if(v[i]%2==0){
                cout << i+1 << endl;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < n;i++){
            if(v[i]%2!=0){
                cout << i+1 << endl;
                break;
            }
        }
    }
}
int32_t main()
{
    make_fast;
    //  int t;
    //  cin >> t;
    // while (t--)
    // {
    answer();
    // }
    return 0;
}