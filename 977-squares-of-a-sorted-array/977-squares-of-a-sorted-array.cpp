class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int l=nums.size();
        
        for(int i=0;i<l;i++){
            int x=nums[i];
            nums[i]=x*x;
        }
        
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};