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
    int ar[n];
    for (int i = 0; i < n;i++){
        cin >> ar[i];
    }
    vector<int> a;
    a.push_back(ar[0]);
    for (int i = 1; i < n;i++){
        if(ar[i]<ar[i-1]){
            a.push_back(1);
        }
        a.push_back(ar[i]);
        
    }
    cout << a.size() << endl;
    for(auto x:a)
        cout << x << " ";
    cout << endl;
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