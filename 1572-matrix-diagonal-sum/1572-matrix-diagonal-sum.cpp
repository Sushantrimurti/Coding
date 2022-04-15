class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     
        
        int s=0;
        
        int m=mat.size();
        int n=mat[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j||(i+j==n-1&&i!=j))
                    s+=mat[i][j];
                
            }
        }
        
        return s;
        
        
    }
};