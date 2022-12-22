class Solution 
{
public:
    int arrangeCoins(int n) {
        long n_long = (long) n;
        long left = 1, right = n_long;
        
        while(left <= right) {
            long mid = left + (right - left) / 2; // (left + right) / 2
            
            if(mid * (mid + 1) / 2 <= n_long) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            
        }
        return (int) left - 1;
    }
};
