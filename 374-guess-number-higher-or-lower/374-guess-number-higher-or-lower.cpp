/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
       long long int i = 1;
        long long int j = n;
        
        int ans;
        while(i<=j)
        {
            int mid = (i+j)/2;
            ans = guess(mid);
            
            if(ans>0)
            {
                i = mid+1;
            }
                
            else if(ans<0)
            {
                j = mid-1;
            }
            else
            {
                ans = mid;
                break;
            }
        }
        return ans;
    }
};