class Solution {
public:
    int reverse(int x) {
       
         if(x>=2147483647 || x<=-2147483648)
           return 0;
        
        long long temp = 0;
        
        if(x>0){
        while(x != 0)
        {
            int rem = x%10;
            temp=temp*10+rem;
            
            if((temp>=(pow(2,31)-1)) || temp<=pow(-2,31))
                return 0;
            
            x = x/10;
        }
        }
       
       else
        {
            x=-1*x;
            while(x>0)
        {
           
            int rem = x%10;
            x = x/10;
            temp = temp*10+rem;
          
            if((temp>=(pow(2,31)-1)) || temp<=pow(-2,31))
                return 0;   
        }
       temp=-1*temp;     
    }
       
        return int(temp);
    }
};