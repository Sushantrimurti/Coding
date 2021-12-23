class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int s=edges.size();
        map<int,int>m;
        for(int i=0;i<s;i++){
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }
        int r;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==s)
            {
                r=it->first;
                break;
            }
        }
        
        return r;
        
    }
};