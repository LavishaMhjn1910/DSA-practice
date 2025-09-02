#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false; // Lengths must be equal
        
        vector<int> count(26, 0); // For 26 lowercase letters
        
        for (char c : s) {
            count[c - 'a']++;
        }
        for (char c : t) {
            count[c - 'a']--;
        }
        
        for (int x : count) {
            if (x != 0) return false; // mismatch in frequency
        }
        return true;
    }
};
