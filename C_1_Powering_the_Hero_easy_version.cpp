#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*int gcd (int a, int b) {
   if (b == 0)
       return a;
   else
       return gcd (b, a % b);
}*/

// (a + b) mod m = (a mod m + b mod m) mod m
// (a - b) mod m = (a mod m - b mod m)+b mod m
// (a ? b) mod m = (a mod m ? b mod m) mod m
// (a · b) mod m = (a mod m · b mod m) mod m

void solution()
{
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    priority_queue<int> pr_qu;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > 0)
            pr_qu.push(vec[i]);
        if (vec[i] == 0)
        {
            if (!pr_qu.empty())
            {
                result += pr_qu.top();
                // cout << ans << " ";
                pr_qu.pop();
            }
        }
    }
    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}