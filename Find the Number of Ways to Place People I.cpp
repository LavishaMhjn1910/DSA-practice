#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        // Sort by x ascending, if tie then by y descending
        sort(points.begin(), points.end(), [](auto &a, auto &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        int ans = 0;
        int n = points.size();

        for (int i = 0; i < n; i++) {
            int yAlice = points[i][1];
            int maxY = INT_MIN;  // keeps track of highest valid y seen so far

            for (int j = i + 1; j < n; j++) {
                int yBob = points[j][1];
                // Bob must be below or equal to Alice, but strictly better than maxY
                if (maxY < yBob && yBob <= yAlice) {
                    ans++;
                    maxY = yBob;
                }
            }
        }

        return ans;
    }
};
