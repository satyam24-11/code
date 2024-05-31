#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{  
    int a,b;
    cin>>a>>b;
    int n;
    cin >> n;
    vector<int>s(n);
    int sum = 0;
    for(auto &x:s){
        cin>>x;
        sum += x;
    }
    vector<bool> ssp(sum + 1);
    ssp[0] = true;
    for(auto x:s){
        for (int i = sum; i >= 0;i--){
            if(i-x>=0 && ssp[i-x]){
                ssp[i] = true;
            }
        }
    }
    int ans;
    int idx = 0;
    int bestValue = 0;

    for (int t = 1; t <= sum;t++){
        int at = a * t;
        int bt = b * t;

        if(at+bt<sum)
            continue;
        while(idx<=min(sum,at)){
            if(ssp[idx])
               bestValue = idx;
            idx++;
        }
        if(bt>=sum-bestValue){
            ans = t;
            break;
        }
            
    }
    cout << ans << endl;
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