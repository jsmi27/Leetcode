# https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vtr(2);
        int i,j;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<nums.size();j++){    
                if(nums[i]+nums[j]==target){
                    vtr[0]=i;
                    vtr[1]=j;
                }
            }
        }
        return vtr;
    }
};