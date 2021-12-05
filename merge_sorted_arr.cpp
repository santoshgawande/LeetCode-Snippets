#include<iostream>
#include<vector>
using namespace std;

// Runtime error
/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;
        if(nums2.size() != 0){
            for(i=0;i<m;i++){
                nums1[i+m] = nums2[i];
            }
            
        }else if(nums1.size()== 0){
            nums1[0] = nums2[0];
        }
        
        sort(nums1.begin(), nums1.end());
    }
};
*/


/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        int p = (m+n)-1;
        int p2 = n-1;
        for(int i=0;i<m+1;i++){
            if(p1>=0 && p2>=0){
                if(nums1[p1]<nums2[p2]){
                    nums1[p] = nums2[p2];
                    cout<<"nums1[p] :"<<nums1[p]<<endl;
                    cout<<"nums1[p1] :"<<nums1[p1]<<endl;
                    cout<<"nums2[p2] :"<<nums2[p2]<<endl;
                    cout<<"p :"<<p;
                    cout<<"p2 :"<<p2;
                    p--;
                    p2--;
                    cout<<endl;
                }else if(nums1[p1] > nums2[p2]){
                    nums1[p] = nums1[p1];
                    cout<<"nums1[p] :"<<nums1[p]<<endl;
                    cout<<"nums1[p1] :"<<nums1[p1]<<endl;
                    cout<<"nums2[p2] :"<<nums2[p2]<<endl;
                    cout<<"p :"<<p;
                    cout<<"p1 :"<<p1;
                    p--;
                    p1--;
                    cout<<endl;
                
                }else{
                    // If 2 == 2 
                    nums1[p] = nums2[p1];
                    cout<<"nums1[p] :"<<nums1[p]<<endl;
                    cout<<"nums1[p1] :"<<nums1[p1]<<endl;
                    cout<<"nums2[p2] :"<<nums2[p2]<<endl;
                    cout<<"p :"<<p;
                    cout<<"p1 :"<<p1;
                    cout<<"p2:"<<p2;

                    p--;
                    // p1--;
                    p2--;
                    cout<<endl;
                
                }

            }else if(p1>=0){
                nums1[p] = nums1[p1];
                p--;
                p1--;
            }else{
                nums1[p] = nums2[p2];
                p--;
                p2--;
            }
            
        }
    }
};

*/

// Accepted
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        //int p = (m+n)-1;
        int p2 = n-1;
        for(int p=(m+n)-1;p>=0;p--){
            if(p2<0){
                break;
            }
            if(p1>=0 && nums1[p1]>nums2[p2]){
                nums1[p] = nums1[p1];
                cout<<" if nums1[p]"<<nums1[p]<<endl;
                p1--;
            }else{
                // nums1>nums2[p2]
                nums1[p] = nums2[p2];
                cout<<"else nums1[p]"<<nums1[p]<<endl;

                p2--;
                
            }
        }
    }
};
int main(){
    // vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums1{1,0};

    int m=1;
    vector<int> nums2{2};
    int n=1;
    Solution s;
    s.merge(nums1,m,nums2,n);
    cout<<"Output :"<<endl;
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    return 0;
}