#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void dfs(int currCity, int remaining, vector<vector<int>> &graph,  vector<bool> &visited, unordered_set<int> &reachable)
{
    visited[currCity] = true;
    reachable.insert(currCity);

    for (int connected : graph[currCity])
    {
        if (!visited[connected] && remaining > 0)
        {
            dfs(connected, remaining - 1, graph, visited, reachable);
        }
    }
}
void answer()
{
    int n, m, k, c;
    cin >> n >> m >> k >> c;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    unordered_set<int> reachable;

    dfs(c, k, graph, visited, reachable);
    cout << reachable.size() << endl;
}
int32_t main()
{
    make_fast;
    //  int t;
    // cin >> t;
    //  while (t--)
    // {
    answer();
    // }
    return 0;
}