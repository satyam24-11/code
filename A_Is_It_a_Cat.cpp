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
    string str1;
    cin >> str1;
    if ((str1[0] != 'm' && str1[0] != 'M') || (str1[n - 1] != 'w' && str1[n - 1] != 'W'))
    {
        cout << "NO"
             << "\n";
        return;
    }
    for (int i = 1; i < str1.length() - 1; i++)
    {
        if (str1[i] != str1[i + 1])
        {
            if ((str1[i] == 'm' || str1[i] == 'M') && (str1[i + 1] == 'e' || str1[i + 1] == 'E'))
                continue;
            else if ((str1[i] == 'e' || str1[i] == 'E') && (str1[i + 1] == 'o' || str1[i + 1] == 'O'))
                continue;
            else if ((str1[i] == 'o' || str1[i] == 'O') && (str1[i + 1] == 'w' || str1[i + 1] == 'W'))
                continue;
            else if ((str1[i] == 'm' || str1[i] == 'M') && (str1[i + 1] == 'm' || str1[i + 1] == 'M'))
                continue;
            else if ((str1[i] == 'e' || str1[i] == 'E') && (str1[i + 1] == 'e' || str1[i + 1] == 'E'))
                continue;
            else if ((str1[i] == 'o' || str1[i] == 'O') && (str1[i + 1] == 'o' || str1[i + 1] == 'O'))
                continue;
            else if ((str1[i] == 'w' || str1[i] == 'W') && (str1[i + 1] == 'w' || str1[i + 1] == 'W'))
                continue;
            else
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
    }
    cout << "YES"
         << "\n";
    return;
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