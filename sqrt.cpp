#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        vector<int> v;
        if(x<2){
            return x;
        }else{
            for(int i=2;i<=x/2;i++){
                v.push_back(i);
                int r = i;
                cout<<"v[i]"<<r<<" ";
            }
            int low=0;
            int high= v.size()-1;
            while(low<=high){
                int mid = low +(high-low)/2;
                if(v[mid]*v[mid] == x){
                    cout<<"mid :"<<v[mid]*v[mid]<<"=="<<x<<endl;
                    return v[mid];
                }else if(v[mid]*v[mid]>x){
                    high = mid-1;
                    cout<<"else if mid :"<<v[mid]*v[mid]<<"=="<<x<<endl;

                }else{
                    low = mid+1;
                    cout<<"else mid :"<<v[mid]*v[mid]<<"=="<<x<<endl;

                }
            }
            
        }
        
    }
};

int main(){
    int x=8;
    Solution s;
    int res = s.mySqrt(x);
    cout<<"res :"<<res<<endl;
    return 0;
}