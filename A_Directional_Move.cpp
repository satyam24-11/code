#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            count++;
        }
        else
            count--;
    }
    if(count==0){
        cout << "E" << endl;
    }
    else if(count>0){
        if(count%4==1){
            cout << "S" << endl;
        }
        if(count%4==2){
            cout << "W" << endl;
        }
        if (count % 4 == 3){
            cout << "N" << endl;
        }
        if (count % 4 == 0){
            cout << "E" << endl;
        }
    }
    else{
        count = abs(count);
        if (count % 4 == 1){
            cout << "N" << endl;
        }
        if (count % 4 == 2){
            cout << "W" << endl;
        }
        if (count % 4 == 3){
            cout << "S" << endl;
        }
        if (count % 4 == 0){
            cout << "E" << endl;
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