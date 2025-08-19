class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.empty()) return 0; // If the array is empty, return 0

    int k = 1; // Start with the first element as a unique element
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) { // Found a unique element
            nums[k] = nums[i]; // Place it at the next position
            k++; // Increment the number of unique elements
        }
    }
    return k; // Return the number of unique elements
}

int main() {
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums);
    
    std::cout << "Number of unique elements: " << k << std::endl;
    std::cout << "Array after removing duplicates: ";
    
    for (int i = 0; i < k; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0; 
    }
};
