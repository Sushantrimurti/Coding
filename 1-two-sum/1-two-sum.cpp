class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        
        vector<int>res;
        int l=nums.size();
        int sum=0;
        for(int i=0;i<l-1;i++){
            sum=nums[i];
            for(int j=i+1;j<l;j++)
            {
                if(sum+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
                
        }
        
//         return res;
//         vector<int>res;
//         int l=nums.size();
//         map<int,int>m;
//         m[nums[0]]=0;
//         for(int i=1;i<l;i++){
            
//             int diff=target-nums[i];
//             if(m[diff]>=0)
//             {
//                 res.push_back(m[diff]);
//                 res.push_back(i);
//                 return res;
//             }
            
//             m[nums[i]]=i;
            
            
//         }
//         return res;
    
        return res;
    }
};