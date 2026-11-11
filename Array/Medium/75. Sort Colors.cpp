// LeetCode 75. Sort Colors
// Approach: Counting Sort
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int size = nums.size();
        int zero_count = 0, one_count = 0, two_count = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) zero_count++;
            else if (nums[i] == 1) one_count++;
            else if (nums[i] == 2) two_count++;
        }

        int idx = 0;

        while (zero_count--) nums[idx++] = 0;
        while (one_count--) nums[idx++] = 1;
        while (two_count--) nums[idx++] = 2;
    }
};
