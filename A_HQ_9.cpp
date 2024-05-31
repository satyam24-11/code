#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='H'|| s[i]=='Q' || s[i]==9 ||s[i]=='+'){
            count++;
        }
        
    }
    if(count>0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
}
}
int32_t main()
{
    make_fast;
    answer();
    return 0;
}