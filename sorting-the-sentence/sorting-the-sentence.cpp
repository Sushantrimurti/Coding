class Solution {
public:
    string sortSentence(string s) {
        
        map<int,string>m;
        string t="";
        string x="";
        for(int i=0;i<s.size();i++){
            
            if(isdigit(s[i])){
                int y=int(s[i]);
                m[y]=x;
                x="";
            }
            
            else if(s[i]!=' ')
                x+=s[i];
                
        }
        
        
        
        for(auto it=m.begin();it!=m.end();it++){
            
            t+=it->second;
            t+=" ";
            
        }
        t.erase(t.end()-1);
        
        return t;
    }
};