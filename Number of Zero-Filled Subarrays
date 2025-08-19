#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        long long count = 0;

        for (int num : nums) {
            if (num == 0) {
                count++;
                result += count;  // add all subarrays ending here
            } else {
                count = 0; // reset on non-zero
            }
        }

        return result;
    }
};


Time: O(n) (single pass over the array)
Space: O(1) (constant extra space)
