// Last updated: 9/5/2025, 9:00:21 PM
class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){
            return x;
        }
        int left=1;
        int right=x;
        int ans=0;
        while(left<=right){
        int middle = left+(right-left)/2;
        if((long long)middle*middle<=x){
            ans=middle;
            left=middle+1;
        }
        else{
            right=middle-1;
        }
        
        }
        return ans;
    }
};