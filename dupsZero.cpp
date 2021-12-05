#include<iostream>
#include<vector>
using namespace std;
class Solution {
    private:
        vector<int> arr;
    public:
        void duplicateZeros(vector<int>& arr) {
            int possibleDups = 0;
            int len = arr.size()-1;
            for(int i=0;i<len+1;i++){
                if(i>len-possibleDups){
                    break;
                }
                
                if(arr[i] == 0){
                    if( i == len - possibleDups){
                        arr[len] = 0;
                        len--;
                        break;
                    }
                    possibleDups++;
                }

            }
            int lastelem = len - possibleDups;
            for(int j=lastelem; j>=0;j--){
                if(arr[j] == 0){
                    arr[j+possibleDups] = 0;
                    possibleDups--;
                    arr[j+possibleDups] = 0;
                }else{
                    arr[j+possibleDups] = arr[j];
                }
            }
            
        }
};

int main(){
    Solution s;
    vector<int> v{1,0,2,3,0,4,5,0};
    s.duplicateZeros(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}