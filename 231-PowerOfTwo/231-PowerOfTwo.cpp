// Last updated: 9/5/2025, 9:00:07 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        for(long long i=1 ; i<=n ; i*=2){
            if(i==n){
                return true;
            }
        }
        return false;
    }
};