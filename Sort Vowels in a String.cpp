#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        // Define vowels
        string vowels = "aeiouAEIOU";
        unordered_set<char> vowelSet(vowels.begin(), vowels.end());

        // Extract vowels from string
        vector<char> extracted;
        for (char c : s) {
            if (vowelSet.count(c)) extracted.push_back(c);
        }

        // Sort vowels
        sort(extracted.begin(), extracted.end());

        // Replace vowels in string with sorted ones
        int idx = 0;
        for (char &c : s) {
            if (vowelSet.count(c)) {
                c = extracted[idx++];
            }
        }

        return s;
    }
};
