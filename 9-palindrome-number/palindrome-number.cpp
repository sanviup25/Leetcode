
class Solution {
public:
    bool isPalindrome(int x){
        long long rev = 0;
        int onum = x;
        while (x > 0) { 
            
            int lastdigit = x % 10;
            x /= 10;

            rev = (rev * 10) + lastdigit;
        }
        return rev == onum;
        
    }
};