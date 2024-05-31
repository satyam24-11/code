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
    if(n==3){
        cout << "NO SOLUTION" << endl;
        return;
    }
    if(n==2){
        cout << "NO SOLUTION" << endl;
        return;
    }
    if(n==4){
        cout << "2 4 1 3" << endl;
        return;
    }
    vector<int> v;
    for (int i = 0; i < n;i++){
        if((i+1)%2!=0){
            v.push_back(i + 1);
        }
    }
    for (int i = 0; i < n;i++){
        if((i+1)%2==0){
            v.push_back(i + 1);
        }
    }
    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
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