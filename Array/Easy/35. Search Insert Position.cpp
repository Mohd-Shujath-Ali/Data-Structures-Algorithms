/* 
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int size = nums.size(), low = 0, high = size-1, index = size;
        
        while(low<=high){
            int mid = (low+high)/2;

            if(target==nums[mid]) return mid;

            else if(target<nums[mid]){
                index = mid;
                high = mid-1;
            }
            else if(target>nums[mid]){
                low= mid+1;
            }
        }

        return index;
        
    }
};
