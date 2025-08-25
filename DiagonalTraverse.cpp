#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> diagonals(m + n - 1);

        // Group elements by (row + col)
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                diagonals[i + j].push_back(mat[i][j]);
            }
        }

        vector<int> result;
        result.reserve(m * n);

        // Traverse diagonals
        for (int d = 0; d < diagonals.size(); d++) {
            if (d % 2 == 0) {
                // reverse for even diagonals
                reverse(diagonals[d].begin(), diagonals[d].end());
            }
            for (int val : diagonals[d]) {
                result.push_back(val);
            }
        }

        return result;
    }
};
