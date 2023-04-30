#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000007;
void answer()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    map<char, int> mp1, mp2;
    for (int i = 0; i < str1.length(); i++)
    {
        mp1[str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        mp2[str2[i]]++;
    }
    if (str1.length() != str2.length())
    {
        cout << "NO" << endl;
        return;
    }
    int count = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i]) count++;
    }
    if(count==2){
        if(mp1==mp2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl; 

}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    answer();
    // }
    return 0;
}