class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     
        vector<int>v;
        map<int,int,greater<int>>m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int c=0;
        priority_queue<pair<int,int>>pq;
        
        for(auto it=m.begin();it!=m.end();it++){
            
            pq.push({it->second,it->first});
            pair<int,int>x=pq.top();
            if(pq.size()>m.size()-k){
                
                v.push_back(x.second);
                pq.pop();
            }
        }
        
        return v;
        
    }
};