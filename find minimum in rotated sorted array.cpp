class Solution {
public:
    int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[right]) {
                // Minimum must be in the right half
                left = mid + 1;
            } else {
                // Minimum could be at mid or in the left half
                right = mid;
            }
        }
        
        return nums[left];    
    }
};
