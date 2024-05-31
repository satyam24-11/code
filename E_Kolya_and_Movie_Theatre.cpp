#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,m,d;
    cin >> n >> m >> d;
    vector<int> a(n);
    for(auto &x:a){
        cin >> x;
    }
    int ans = 0;
    int bestSum = 0;
    multiset<int> best; //best atmost(n-1) movies
    for (int i = 0; i < n;i++){
        if(a[i]<0 )
            continue;
            //let's assume we are taking the ith guy
        int total = i + 1 + 1;
        int taking=1+best.size();

        int tempAns = -1 * d * (i+1);
        tempAns += a[i] + bestSum;
        ans = max(ans, tempAns);

        // we need to update the best movies
        if(best.size()<m-1){
            best.insert(a[i]);
            bestSum += a[i];
        }
        else if(best.size())
        {   
            //we need to take one of a[i]or *best.begin()
            auto it = best.begin();
            int leastBest = *it;
            if(a[i]>leastBest){
                best.erase(it);
                best.insert(a[i]);
                bestSum-=leastBest;
                bestSum += a[i];
            }
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