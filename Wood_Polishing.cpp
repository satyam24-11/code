#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
int divisible(int a, int b)
{
    bool flag = 0;
    int temp1 = a;
    int temp2 = b;
    int cnt = 0;
    int cnt2 = 0;
    while (temp1 % temp2 != 0)
    {
        cnt++;
        temp1++;
        temp2--;
    }
    while (a % b != 0)
    {
        cnt2++;
        a--;
        b++;
    }
    return min(cnt, cnt2);
}
void answer()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        int cnt = 0;
        while (a % b != 0)
        {
            a++;
            b--;
            cnt++;
        }
        cout << cnt << endl;
    }
    else
    {

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt1, cnt2;
            int c = a;
            int d = b;
            while (a % b != 0)
            {
                a++;
                b--;
                cnt1++;
            }

            while (c % d != 0)
            {
                c--;
                d++;
                cnt2++;
            }

            cout << min(cnt1, cnt2) << endl;
        }
    }
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
