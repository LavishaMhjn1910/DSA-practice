#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        
        // Count frequency of each task
        for (char t : tasks) {
            freq[t - 'A']++;
        }
        
        // Find the maximum frequency
        int maxFreq = *max_element(freq.begin(), freq.end());
        
        // Count how many tasks have max frequency
        int countMax = count(freq.begin(), freq.end(), maxFreq);
        
        // Formula:
        // (maxFreq - 1) * (n + 1) + countMax
        // Compare with total tasks, because if tasks fill all idle slots, no extra idle needed
        int result = max((int)tasks.size(), (maxFreq - 1) * (n + 1) + countMax);
        
        return result;
    }
};
