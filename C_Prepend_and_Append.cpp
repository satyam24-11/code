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
    int j = n-1 ;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    int i = 0;
    while(i<=j){
        if((s[i]=='1' &&s[j]=='0') ||(s[i]=='0' &&s[j]=='1')){
            i++;
            j--;
        }
        else {
            cout << j-i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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