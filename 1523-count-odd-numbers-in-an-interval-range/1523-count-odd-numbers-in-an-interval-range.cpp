class Solution {
public:
    int countOdds(int low, int high) {
       long long int i = 0;
        while(low<=high)
        {
            if(low%2 != 0){
                i++;
                low=low+2;
            }
            else if(high%2 != 0)
            {
                i++;
                high = high-2;
            }
           else{
               low++;
               high--;
           }       
            
            
        }
        return i;
    }
};