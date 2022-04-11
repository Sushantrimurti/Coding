class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]!=0)
                v.push_back(nums[i]);
        }
        int n=l-v.size();
        int i=0;
        for(i=0;i<v.size();i++)
            nums[i]=v[i];
        while(n--)
            nums[i++]=0;
    }
};