public class Solution 
{
    public int firstBadVersion(int n) {
        int l = 1;
        int hi = n;

        while (l <= hi) {
            int mid = l + (hi - l) / 2;
            if (isBadVersion(mid)) 
            {
                hi = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }

        return l;
    }
}
