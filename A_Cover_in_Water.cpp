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
    string s;
    cin >> s;
    int ans = 0;
    int req = 0;
    int empty = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='.' && empty==1){
            ans++;
            req++;
        }
        if(req>=3){
            ans = 2;
            break;
        }
        if(s[i]=='.' && empty==0){
            empty = 1;
            ans++;
            req++;
        }
        if(empty==1 &&s[i]=='#'){
            req= 0;
            empty=0;
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

