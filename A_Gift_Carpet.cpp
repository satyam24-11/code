#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> mat[i][j];
        }
    }
    string ans = "vika";
    int curIdx = 0;
    for (int j = 0; j < m && curIdx<4;j++){
        bool found = 0;
        for (int i = 0; i < n;i++){
            if(mat[i][j]==ans[curIdx]){
                found = 1;
                break;
            }
        }
        if(found){
            curIdx++;
        }
    }
    if(curIdx==4){
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