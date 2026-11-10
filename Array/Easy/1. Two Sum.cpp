/*
Brute Force:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();

        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){

                if((nums[i]+nums[j])==target ){
                    return {i,j};
                }

            }
        }

        return {};
        
    }
};



Optimal:
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;

        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }

        for(int i = 0;i<nums.size();i++){
            int a = nums[i];
            int more = target - a ;

            if(mpp.find(more)!= mpp.end() && mpp[more]!=i){
                return {i, mpp[more]};
            }
        }

        return {};

    }
};


