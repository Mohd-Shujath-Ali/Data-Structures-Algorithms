// Optimal
// Time Complexity O(N)
// SPace Complexity O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};


//Brute FOrce
// Time Complexity O(N)
// SPace Complexity O(N)
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int size = nums.size(), j =0;
        k = k % size;
        vector<int> rotated(size);

      for (int i = 0; i < size; i++) {
            rotated[(i + k) % size] = nums[i];
        }

        nums = rotated;
               
    }
};
*/

