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
    unordered_map<string, int> ump;
    bool found = false;
    for (int i = 0; i < n-1;i++){
        string t = s.substr(i,2);
        if(ump.find(t)!=ump.end()){
            if(ump[t]<i-1){
                cout << "YES" << endl;
                found = true;
                break;
            }
        }
        else{
            ump[t] = i;
        }
    }
    if(!found){
        cout << "NO" << endl;
    }
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