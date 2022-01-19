class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int l= sentences.size();
        int c=0,res=0;
        
        for(int i=0;i<l;i++){
            string s=sentences[i];
            c=0;
            for(int j=0;j<s.size();j++){
                if(s[j]==' ')
                    c++;
            }
            res=max(res,c);
        }
        return res+1;
        
    }
};