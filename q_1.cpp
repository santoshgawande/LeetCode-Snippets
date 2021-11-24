// Runtime Error
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> v;
            for(int i=0;i<v.size()-1;i++){
                if(nums[i]+nums[i+1] == target){
                    v.push_back(i);
                    v.push_back(i+1);
                }
            }
            return v;
        }
};