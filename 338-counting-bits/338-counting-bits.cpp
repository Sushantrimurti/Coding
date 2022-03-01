class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>r;
        
        for(int i=0;i<=n;i++){
            
            int s=0;
            int t=i;
            
            while(t!=0){
                
                s+=t%2;
                t=t/2;
                
            }
            
            r.push_back(s);
            
        }
        
        return r;
        
    }
};