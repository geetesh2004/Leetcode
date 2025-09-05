// Last updated: 9/5/2025, 9:00:34 PM
class Solution {
public:
    int reverse(int x) {
        int rev_no=0;
        while(x!=0){
            int last_digit = x%10;
            if((rev_no>INT_MAX/10)||(rev_no<INT_MIN/10)){
                return 0;
            }
            
            rev_no=(rev_no*10)+last_digit;
            x=x/10;
        }
        return rev_no;
        
    }
};