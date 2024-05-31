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
    int b;
    int cnt = 0;
    int read = 0;
    while(n--){
        int type;
        cin >> type;
        if(type==1){
            cin >> b;
            cnt += b;
            read = max(read, cnt);
        }
        else if(type==2){
            cnt -= b;
        }
    }
    cout << read << endl;
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