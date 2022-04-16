class Solution {
public:
    string interpret(string command) {
        
        
        string s;
        int l=command.size();
        for(int i=0;i<l;i++)
        {
            if(command[i]=='G')
                s+='G';
            else if(command[i+1]==')'){
                s+='o';
                i+=1;
            }
            else
            {
                s+="al";
                i+=3;
            }
        }
        
        return s;
        
    }
};