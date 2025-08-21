class Solution {
public:
    static bool cmp(string &a, string &b) {
        return a + b > b + a;  // Custom comparator
    }

    string largestNumber(vector<int>& nums) {
        // Convert numbers to strings
        vector<string> arr;
        for (int n : nums) arr.push_back(to_string(n));

        // Sort using custom comparator
        sort(arr.begin(), arr.end(), cmp);

        // Edge case: if the largest number is "0", return "0"
        if (arr[0] == "0") return "0";

        // Concatenate all strings
        string result = "";
        for (string &s : arr) result += s;

        return result;
    }
};
TC-n log n
SC-n
