#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    vector<vector<char>> arrowBoard(10, vector<char>(10));
    int totalPts = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> arrowBoard[i][j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arrowBoard[i][j] == 'X')
            {
                int r = min(min(i, j), min(9 - i, 9 - j));
                if (r == 0)
                {
                    totalPts += 1;
                }
                else if (r == 1)
                {
                    totalPts += 2;
                }
                else if (r == 2)
                {
                    totalPts += 3;
                }
                else if (r == 3)
                {
                    totalPts += 4;
                }
                else if (r == 4)
                {
                    totalPts += 5;
                }
            }
        }
    }

    cout << totalPts << endl;
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