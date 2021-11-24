// Error : Time Limit Exceeded
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res= false;
        int i,j;
        for(i =0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    res = true;
                }
            }
        }
        
        return res;
    }
};