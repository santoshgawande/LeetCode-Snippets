// Accepted but
// Time limit exceeded
class Solution {
public:
    int guessNumber(int n) {
        int pick;
        for(int i=1;i<n;i++){
           if(guess(i)== 0){
               return i;
           }
        }
        return n;
    }
};

// Accepted
// Time : (log(n))
class Solution {
public:
    int guessNumber(int n) {
        int left =1;
        int right = n;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(guess(mid)== 0){
                return mid;
            }else if(guess(mid) < 0){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return -1;
    }
};