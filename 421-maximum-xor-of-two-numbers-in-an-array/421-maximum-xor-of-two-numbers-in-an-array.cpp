class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        
          int mask = 0;
        int result = 0;
        for (int i=30; i>=0; i--)
        {
            mask =  mask | (1 << i);
            unordered_set<int> myset;
            for (int i=0; i<nums.size(); i++)
            {
                myset.insert(nums[i] & mask);
            }
            
            int candidate = result | (1<<i);
            for (auto it=myset.begin(); it!=myset.end(); it++)
            {
                if (myset.count(candidate ^ *it))
                {
                    result = candidate;
                    break;
                }
            }            
        }
        
        return result;
        
    }
};