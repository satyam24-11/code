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
    cin>>n;
    int p;
    cin >> p;
    set<int> s;
    while (p--){
        int x;
        cin>>x;
        s.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int y;
        cin >> y;
        s.insert(y);
    }
    if(s.size()==n){
        cout << "I become the guy." << endl;
    }
    else
        cout << "Oh, my keyboard!" << endl;
}
int32_t main()
{
    make_fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
        answer();
    // }
    return 0;
}