// Accept 
//Time : O(log n)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res;
        int low = 0;
        int high = nums.size()-1;
        // causes time limit exceed
        //int mid = (high+low)/2;
        while(low<=high){
           int mid = low +(high-low)/2;

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid]<target){
                low=mid+1;

            }else {
                high = mid-1;
            }
        }
        return -1;
        
    }
};