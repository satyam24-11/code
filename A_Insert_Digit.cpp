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
    int n, d;
    cin >> n >> d;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        if (v1[i] >= d)
        {
            v1.push_back(d);
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << v1[i];
    }
    cout << endl;
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