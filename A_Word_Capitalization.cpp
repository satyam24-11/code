#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int Total = 1 << n;
    for (int i = 0; i < Total; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
                cout << A[j];
        }
        cout << endl;
    }
}