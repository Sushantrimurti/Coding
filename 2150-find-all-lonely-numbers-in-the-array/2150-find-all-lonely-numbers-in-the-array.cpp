class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        vector<int>v;
        int l=nums.size();
        unordered_map<int,int>m;
        
        for(int i=0;i<l;i++){
            m[nums[i]]++;
        }
        
        for(int i=0;i<l;i++){
            if(m[nums[i]]==1 && m[nums[i]+1]==0 && m[nums[i]-1]==0)
                v.push_back(nums[i]);
        }
        
        return v;
    }
};