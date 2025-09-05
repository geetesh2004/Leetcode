// Last updated: 9/5/2025, 9:00:33 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int duplicate = x;
        long long int rev_no=0;
        while(x>0){
            int last_digit = x%10;
            x=x/10;
            rev_no=(rev_no*10)+last_digit;
        }
        if(rev_no==duplicate){
            return true;
        }
        else{
            return false;
        }
        
    }
};