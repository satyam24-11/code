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
    vector<int> a(n),b(n,1);
    map<int, int> mp;
    bool f1 = false;
    bool f2 = false;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]]==2 && f1==false){
            b[i] = 2;
            f1 = true;
        }
        else if(mp[a[i]]==2 && f2==false){
            b[i] = 3;
            f2 = true;
        }
    }
    if(f1==false ||f2==false){
        cout << -1 << endl;
        return;
    }
    for(auto it: b){
        cout << it << " ";
    }
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