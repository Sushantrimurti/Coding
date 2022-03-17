class Solution {
public:
    int arrangeCoins(int n) {
        
        
        long s=0;
        long i=1;
        while(s<n){
            
        s+=i;
        
            if(s>n)
                return i-1;
            
         i++;   
        }
        
        return i-1;
    }
};