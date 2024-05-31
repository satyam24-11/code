#include <bits/stdc++.h>
using namespace std;
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
bool check(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; ++i)
    {
        if (a[i] > a[i + 1])
        {
            return true;
        }
    }
    return false;
}

void answer()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    debug(v);
    while (check(v))
    {
        bool flag = false;
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] >= 10)
            {
                flag = true;
                int temp = v[i];
               // debug(v);
                v.erase(v.begin() + i);
                while (temp > 0)
                {
                    int digit = temp % 10;
                    v.insert(v.begin() + i, digit);
                    temp /= 10;
                }
               // debug(v);
                break;
            }
        }
        if (flag == false)
        {   cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main()
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