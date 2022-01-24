class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int l= word.size();
        int c=0;
        int f=0;
        
        if(word[0]>='A' && word[0]<='Z')
            f=1;
        for(int i=0;i<l;i++){
            if(word[i]>='A' && word[i]<='Z')
                c++;
        }
        
        if(c==0)
            return 1;
        else if(c==1 && f==1)
            return 1;
        else if(c==l)
            return 1;
        else 
            return 0;
        
    }
};