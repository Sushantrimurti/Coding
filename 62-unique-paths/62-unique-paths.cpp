class Solution {
public:
    
    int calculate(int i,int j,vector<vector<int>>&dp){
        
        if(i==0 && j==0)
            return 1;
        
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int l=calculate(i,j-1,dp);
        int r=calculate(i-1,j,dp);
        
        return dp[i][j]=l+r;
        
    }
    
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return calculate(m-1,n-1,dp);
        
        
    }
};