#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
bool check(string s){
    int n = s.length();
    for (int i = 1; i < n;i++){
        if(s[i-1]==s[i]){
            return false;
        }
    }
    return true;
}
 void answer()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    string t;
    cin >> t;
    int len = n + 1;
    while(len!=0){
        if(check(s)){
            cout << "Yes" << endl;
            return;
        }
        else{
            for (int i = 0; i < n;i++){
                s[i]= s[i+1]+ t[m];
            }
            //cout << s << endl;
            len--;
        }
    }
    cout << "No" << endl;
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