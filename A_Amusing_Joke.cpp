#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;

void answer()
{
    string str1;
    string str2;
    string str3;
    cin >> str1;
    cin >> str2;
    cin >> str3;
    map<char, int> mp1, mp2, mp3;
    for (int i = 0; i < str1.length(); i++)
    {
        mp1[str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        mp2[str2[i]]++;
    }
    for (int i = 0; i < str3.length(); i++)
    {
        mp3[str3[i]]++;
    }
    if (str1.length() + str2.length() != str3.length())
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        if (mp1[str1[i]] != mp3[str1[i]])
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < str2.length(); i++)
    {
        if (mp2[str2[i]] != mp3[str2[i]])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    make_fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
        answer();
    // }
    return 0;
}