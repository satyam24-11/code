#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
// bool canFormPalindrome(string s)
// {
//     unordered_map<char, int> mpp;
//     for (int i = 0; i < s.size();i++)
//     {
//         mpp[s[i]]++;
//     }

//     int oddCount = 0;


  
//     for (auto it : mpp)
//     {
//         if (it.second % 2 != 0)
//         {
//             oddCount++;
//         }
//     }
//     //cout<<oddCount<<" ";
//     if (oddCount>1)
//     {
//         return false;
//     }

//     return true;
// }
 
  void answer()
   {
    string s;
     cin>>s;
//     if(s.size()<4){
//         cout << "NO" << endl;
//         return;
//     }
//     if (canFormPalindrome(s))
//     {
//             cout << "YES\n";
//     }
//     else
//     {
//             cout << "NO\n";
//     }

  set<char>set_s;
  int size = s.size() / 2;
  for (int i = 0; i < size; i++)
  {
      set_s.insert(s[i]);
    }
    if(set_s.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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