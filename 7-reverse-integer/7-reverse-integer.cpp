class Solution {
public:
    int reverse(int x) {
        long long s=0;
        
        if(x>pow(-2,31)&& x<(pow(2,31))-1)
        {    
        
            if(x<0)
            {
                x=((-1)*x);
                while(x>0)
                {
                    
                   int rem=x%10; 
                    x=x/10;
                    s=s*10+rem;
                    if((s>=(pow(2,31))-1) || s<=pow(-2,31))
                    {
                           return 0;
                    }
                    
               }
               s=((-1)*s);
            }

        
            else
            {
                while(x!=0)
                {
                    int rem=x%10;
                    s=s*10+rem;
                    if((s>=(pow(2,31))) || s<=pow(-2,31))
                    {
                           return 0;
                    }
                    x=x/10;
                }
                

            }
        }
        else{
            return 0;
        }
             
             
        
        
        
        return int(s);
        
    }
};