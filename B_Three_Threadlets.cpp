#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);   
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
        // cout << index << endl;
    }
}
bool same(vector<int>&v){
    int a = v[0];
    for (int i = 0; i < v.size();i++){
        if(v[i]!=a)
            return false;
    }
    return true;
}

void answer()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    if(a==b &&b==c &&a==c){
        cout << "YES" << endl;
        return;
    }
    int i = 0;
    while(i!=3){
        int maxi = *max_element(v.begin(), v.end());
        int mini = *min_element(v.begin(), v.end());
        int temp = maxi - mini;
        int K = maxi;
        int indexToDelete = getIndex(v, K);
        //cout << getIndex<< endl;
        if (indexToDelete >= 0 && indexToDelete < v.size())
        {
            v.erase(v.begin() + indexToDelete);
        }
        v.push_back(temp);
        v.push_back(mini);
        i++;
        // for (int i = 0; i < v.size();i++){
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        if (same(v))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
        
    
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