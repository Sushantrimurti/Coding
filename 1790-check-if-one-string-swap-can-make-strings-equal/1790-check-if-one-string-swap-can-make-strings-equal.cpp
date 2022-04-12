class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return 0;
        if(s1==s2)
            return 1;
        int x=0,y;
        for(int i=0;i<s2.size();i++){
            if(s1[i]!=s2[i])
            {
                if(x==0){
                y=i;
                    x++;
                }
                else
                {
                    swap(s2[y],s2[i]);
                    if(s1!=s2)
                        return 0;
                    else
                        return 1;
                    
                    break;
                }
                
            }
        }
        
       return 0; 
    }
};