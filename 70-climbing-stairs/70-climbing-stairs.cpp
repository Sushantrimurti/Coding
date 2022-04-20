class Solution {
public:
    
    unordered_map<int,int>steps;
    int climbStairs(int n) {
        
        
        if(steps.find(n)!=steps.end())
            return steps[n];
        
        int r=0;
        if(n==0) r=0;
        else if(n==1) r=1;
        else if(n==2) r=2;
    
         else r=climbStairs(n-2)+climbStairs(n-1);        
        
        steps[n]=r;
        return r;
        
    }
};