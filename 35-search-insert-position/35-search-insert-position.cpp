class Solution {
public:
    
   
    
    int searchInsert(vector<int>& nums, int target) {
        
        int length=nums.size()-1;
        int l=0;
        int r=length;
        
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]<target)
                l=m+1;
            else
                r=m-1;
        }
        
        
        return l;
    }
};