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

    int n, k;
    cin >> n >> k;
    string str1;
    cin >> str1;
    map<pair<char, char>, pair<int, int>> m1;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            m1[{str1[i], str1[i] - 'a' + 'A'}].first++;
        }
        else
        {
            m1[{str1[i] - 'A' + 'a', str1[i]}].second++;
        }
    }
    int ans = 0;
    for (auto i : m1)
    {
        int c = min(i.second.first, i.second.second);
        // cout << i.second.first << " " << i.second.second << endl;
        ans += c;
    }
    cout << ans << endl;
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