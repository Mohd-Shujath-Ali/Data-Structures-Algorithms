class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int size = nums.size(), k=1;

        for(int i=1;i<size;i++){

            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }

        return k;
        
    }
};
