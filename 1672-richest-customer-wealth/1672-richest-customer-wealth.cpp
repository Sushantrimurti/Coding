class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int m=accounts.size();
        int n=accounts[0].size();
        int maxi=0;
        int s;
        for(int i=0;i<m;i++){
            s=0;
            for(int j=0;j<n;j++){
                
                s+=accounts[i][j];
                
            }
            
            maxi=max(maxi,s);
        }
        
        return maxi;
        
    }
};