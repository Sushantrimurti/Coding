class Solution {
public:
   
    
    bool isPowerOfTwo(int n) {
        
        if(n==1)
            return true;
        if(n%2!=0)
            return false;
        long long int p=1;
        while(p<=n){
            p = p*2;
            if(p==n)
            {
               return true;
            }
        }
        
        return false;
        
    }
};