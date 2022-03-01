class Solution {
public:
    
    int calculate(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        
        if(i==0 && j==0)
            return grid[0][0];
        
        if(i<0 || j<0)
            return 1e9;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        int l,u;
             l=grid[i][j]+calculate(i,j-1,grid,dp);
             u=grid[i][j]+calculate(i-1,j,grid,dp);
        
        return dp[i][j]=min(l,u);
            
        
    }
        
        
    int minPathSum(vector<vector<int>>& grid) {
        
        
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        
        return calculate(m-1,n-1,grid,dp);
        
    }
};