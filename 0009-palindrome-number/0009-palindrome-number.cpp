class Solution {
public:
    bool isPalindrome(int x) {
        long long int res = 0;
        int original = x;
        while(x>0) {
            int lastdig=x%10;
            res = res*10+lastdig;
            x = x/10;
        } if(res==original) {
            return true;
        } else {
            return false;
        }
    }
};