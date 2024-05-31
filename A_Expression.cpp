#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
   int a,b,c;
   cin>>a>>b>>c;
   int ans1=a * b * c ;
    int ans2=a + b * c;
    int ans3=a * (b + c);
    int ans4=(a + b) * c;
    int ans5 = a + b + c;
    int ans = max(ans1, ans2);
    int maxi1 = max(ans, ans3);
    int maxi2 = max(maxi1, ans4);
    int maxi3 = max(maxi2, ans5);
    cout << maxi3 << endl;
}
int32_t main()
{
    make_fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
        answer();
    // }
    return 0;
}