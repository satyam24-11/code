#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

#define make_fast()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE

#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int left = 0;
        int res = INT_MAX;
        int orVal = *max_element(nums.begin(), nums.end());
        for (int right = 0; right < n; right++)
        {
            while (orVal >= k && left <= right)
            {
                orVal |= nums[right];
                res = min(res, left-right + 1);
                orVal ^= nums[left];
                // debug(orVal,res,left);
                left++;
            }
            if (res == INT_MAX)
            {
                return -1;
            }
        }

        return res;
    }
};

signed main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    debug(nums);
    int k;
    cin >> k;
    Solution sol;
    int result = sol.subarraySum(nums, k);

    cout << result << endl;

    return 0;
}
