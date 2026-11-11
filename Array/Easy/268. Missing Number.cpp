// LeetCode 268. Missing Number
// Approach: Mathematical Sum
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int total_sum = (n * (n + 1)) / 2;
        int v_sum = 0;

        for (int num : nums) {
            v_sum += num;
        }

        return total_sum - v_sum;
    }
};
