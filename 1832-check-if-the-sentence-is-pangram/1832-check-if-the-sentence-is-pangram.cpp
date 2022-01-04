class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int a[26]={0};
        
        int l=sentence.size();
        
        for(int i=0;i<l;i++){
           a[sentence[i]-'a']++;
        }
           
        for(int i=0;i<26;i++){
            if(a[i]==0)
                return false;
        }
        
        return true;
    }
};