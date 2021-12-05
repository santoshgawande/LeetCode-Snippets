// Error : Time Limit Exceeded
// O(n2)
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

// Accepted : O(nlogn)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i;
        bool res=false;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                res= true;
            }
        }
        return res;
        
    }
};