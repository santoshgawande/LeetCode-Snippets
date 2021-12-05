// Accepted 
// Time :O(n)
// Space : O(1)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int prevmax=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
            }else{
                if(prevmax<count){
                    prevmax = count;
                    count=0;
                }else{
                    count=0;
                }
            }
        }
        
        if(prevmax<count){
            return count;
        }else{
            return prevmax;
        }
        
    }
};