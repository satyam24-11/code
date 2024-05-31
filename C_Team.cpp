#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]>=k){
            count++;
        }
        else
            v.push_back(a[i]);
    }
    if(v.size()==0){
        cout << count << endl;
    }
    else{
        sort(v.begin(), v.end());
        int i = 0;
        int j = v.size() - 1;
        while(i<j){
            if(v[i]+v[j]>=k){
                count++;
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        cout << count << endl;
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