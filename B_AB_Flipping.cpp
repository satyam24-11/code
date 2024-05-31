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
    int cnt = 0;
    vector<int> visited;
   // int i = 0;
    int j = 0;
    // for (int i = 0; i < n;i++){
    //     if(s[i]=='A' && s[i+1]=='B'){
    //         swap(s[i], s[i + 1]);
    //         cnt++;
    //         visited.push_back(i);
    //     }
    // }
    for (int i = n - 1; i >= 0;i--){
        if(s[i]=='B'){
            j++;
        }
        else {
            cnt += j;
            if(j){
                s[i] = 'B';
                j = 0;
                i++;
            }
        }
    
    }
    cout << cnt<< endl;
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