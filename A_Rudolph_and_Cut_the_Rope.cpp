#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,a,b;
    cin >> n;
    int count_rope = 0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b){
            count_rope++;
        }
    }
    cout << count_rope << endl;
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