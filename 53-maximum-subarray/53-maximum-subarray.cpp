class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int s=INT_MIN;
        int r=INT_MIN;
        for(int i=0;i<nums.size();i++){
             if(s<0)
                s=0;
            
            
            s=max(nums[i],s+nums[i]);
        
            r=max(r,s);
            
        }
        return r;
        
    }
};