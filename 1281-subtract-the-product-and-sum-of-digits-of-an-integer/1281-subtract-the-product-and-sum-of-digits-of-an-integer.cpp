class Solution {
public:
    int subtractProductAndSum(int n) {
        int sumdig = 0;
        int mul = 1;
        while (n>0) {
            int lastdig = n%10;
            sumdig+=lastdig;
            mul*=lastdig;
            n=n/10;
        } int result = mul-sumdig;
         return result;
    } 
};