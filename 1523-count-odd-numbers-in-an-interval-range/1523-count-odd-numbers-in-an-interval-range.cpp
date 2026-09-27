class Solution {
public:
    int countOdds(int low, int high) {
        int total = high-low+1;
        int countOdds = (low%2!=0 && high%2!=0)? total/2+1 : total/2;
        return countOdds;
    }
};