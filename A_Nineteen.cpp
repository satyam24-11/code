#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[s[i]]++;
    }
    auto it = mpp.begin();

    // Iterate through the map and print the elements
    // while (it != mpp.end())
    // {
    //     std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    //     ++it;
    // }
     vector<int>v;
    for(auto  it: mpp){
        if(it.first=='n'){
            v.push_back((it.second-1)/2);
        }
        if (it.first == 'i' )
        {
            v.push_back(it.second);
        }
        if (it.first == 'e')
        {
            v.push_back(it.second/3);
        }
        if (it.first == 't' )
        {
            v.push_back(it.second);
        }
       
    }
    if(v.size()>3){
    cout << *min_element(v.begin(), v.end())<<endl;
    }
    else{
        cout<<0<<endl;
    }
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