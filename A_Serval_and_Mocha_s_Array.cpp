#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(a[i], a[j]) <= 2)
                temp = 1;
        }
    }
    if (temp)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}