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
    string s;
    cin >> s;
    while (k--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solution();
    // }
    return 0;
}
