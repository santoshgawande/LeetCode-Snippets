// Accepted 
// Time : O(n*n)
// Space : O(1)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i, j;
        bool res= false;
        for(i=0;i<arr.size();i++){
            for(j=i+1;j<arr.size();j++){
                if(arr[i] == 2*arr[j]){
                    res=true;
                }else if(arr[i]*2 == arr[j]){
                    res=true;
                }
            }
        }
        return res;
        
    }
};