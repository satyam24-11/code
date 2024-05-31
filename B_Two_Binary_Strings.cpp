#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    string a, b;
    cin >> a >> b;
    int n1 = a.length();
    int n2 = b.length();
    // if(a[0]!=b[0] ){
    //     cout << "NO" << endl;
        
    // }
    // if(a[0]==a[n1-1]&&b[0]==b[n1-1] &&a[0]==b[0]){
    //     cout << "YES" << endl;
    //     continue
    // }
    int flag = 0;
    for (int i = 0; i < n1-1;i++){
        if(a[i]==a[0] &&b[i]==a[0]&&a[i+1]==b[i+1]&&a[i+1]==a[n1-1]){
            flag = 1;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else
        cout << "NO" << endl;
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