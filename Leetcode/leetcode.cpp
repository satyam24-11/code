
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool checkforSide(pair<int, int> top_left, pair<int, int> bottom_right)
    {
        return top_left.first <= bottom_right.first && top_left.second >= bottom_right.second;
    }

    bool checkforInternal(pair<int, int> point, pair<int, int> top_left, pair<int, int> bottom_right)
    {
        int x = point.first;
        int y = point.second;

        int rect_x1 = top_left.first;
        int rect_y1 = top_left.second;
        int rect_x2 = bottom_right.first;
        int rect_y2 = bottom_right.second;
        if (!checkforSide(top_left, bottom_right))
        {
            return false;
        }
        return rect_x1 <= x && x <= rect_x2 && rect_y1 >= y && y >= rect_y2;
    }

    int numberOfPairs(vector<vector<int>> &points)
    {
        vector<pair<int, int>> valid;
        for (auto it : points)
        {
            valid.push_back({it[0], it[1]});
        }

        int n = valid.size();
        long long pairs = 0;

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                if (x == y)
                {
                    continue;
                }

                if (checkforSide(valid[x], valid[y]))
                {
                    // valid ho sakta
                    bool checker = true;
                    for (int z = 0; z < n; z++)
                    {
                        if (z == x || z == y)
                        {
                            continue;
                        }

                        if (checkforInternal(valid[z], valid[x], valid[y]) == 1)
                        {
                            checker = 0;
                            break;
                        }
                    }

                    if (checker == true)
                    {
                        pairs++;
                    }
                }
            }
        }

        return pairs;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> points1 = {{1, 1}, {2, 2}, {3, 3}};
    cout << "Example 1: " << sol.numberOfPairs(points1) << endl; // Output: 0

    vector<vector<int>> points2 = {{6, 2}, {4, 4}, {2, 6}};
    cout << "Example 2: " << sol.numberOfPairs(points2) << endl; // Output: 2

    vector<vector<int>> points3 = {{3, 1}, {1, 3}, {1, 1}};
    cout << "Example 3: " << sol.numberOfPairs(points3) << endl; // Output: 2

    return 0;
}
