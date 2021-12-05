// Accepted 
// Wrong Answer
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    nums[j] = nums[j+1];
                    c++;
                }
            }
        }
        return c;
        
    }
};