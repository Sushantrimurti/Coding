class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int f=0, ans=0;
        
        unordered_map<int,int>mp;
        
        mp[0] = -1;
        
        for(int i=0; i<nums.size(); i++){
            
            f += nums[i]==1 ? 1 : -1;
       
            if(mp.find(f) == mp.end())
              mp[ f ] = i;
            else
              ans = max(ans, i - mp[f] );
            
           
               
        }
        
        return ans;
        
    }
};