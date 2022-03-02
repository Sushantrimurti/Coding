class Solution {
public:
    
    
    int subarraySum(vector<int>& nums, int k) {
        
      unordered_map<int,int>m;
        int s=0,r=0;
        m[s]=1;
        
        for(auto i:nums){
            
            s+=i;
            if(m.find(s-k)!=m.end())
                r+=m[s-k];
            
            m[s]++;
            
        }
        return r;
    }
};