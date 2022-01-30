class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int>temp=nums;
        
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
             nums[(i+k)%l]=temp[i];
        }
    }
};