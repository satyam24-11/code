#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false);\
std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    cin>>n;
    vector<int> v1(n),v2(n);
    for (int i = 0; i < n;i++){
        cin >> v1[i];
    }
    for (int i = 0; i < n;i++){
        cin >> v2[i];
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    int ways = 1;
    int element = 0;
    for (int i = 0; i < n;i++){
        while(element<n &&v1[i]<=v2[element]){
            element++;
            ways *= (i - element + 1);
           // cout << ways << " ";
        }
       
    }
        cout << ways<< endl;
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