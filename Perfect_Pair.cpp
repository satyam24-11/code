#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
bool isPerfectSquare(int num)
{
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}
void answer()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int perfectPairs = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (isPerfectSquare(arr[i] * arr[j]))
            {
                perfectPairs++;
            }
        }
    }

    cout << perfectPairs << endl;
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