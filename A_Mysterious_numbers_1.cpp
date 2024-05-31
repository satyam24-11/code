
#include "bits/stdc++.h"
using namespace std;

const int mod = 1e9 + 7;

void answer(){
    int n, m;
    cin >> n >> m;
    string s = to_string(m);
    string ans;
    for (int i = s.length() - 1; i >=0; i--)
    {
        ans += s[i];
    }

    m = stoi(ans);

    cout << n + m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin>>t;
    // while(t!=0){
        answer();
    // }
   
}