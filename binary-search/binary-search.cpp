class Solution {
public:
    
    int searchBinary(vector<int> nums,int l,int r,int t){
        if(r>=l){
        int m=l+(r-l)/2;
    
        if(nums[m]==t)
            return m;
        else if(t>nums[m])
        return searchBinary(nums,m+1,r,t);
           return searchBinary(nums,l,m-1,t);
        }
        
    return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int length=nums.size();
        int l=0;
        int r=length-1;
        return searchBinary(nums,l,r,target);
    }
};