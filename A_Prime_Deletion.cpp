#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
bool checkPrime(int N)
{
    int flag = 1;
    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void answer()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < s.length();i++){
       if(s[i]=='3'){
            idx1 = i;
       }else if(s[i]=='1'){
            idx2 = i;
       }
    }
    if(idx1>idx2){
       cout << "13" << endl;
    }
    else
       cout << "31" << endl;
    
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