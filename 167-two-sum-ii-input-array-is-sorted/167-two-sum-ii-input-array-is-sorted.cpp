class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        vector<int> indices;
        int j=numbers.size()-1;
        while(i<numbers.size() && j>=0)
        {
            if(numbers[i]+numbers[j]==target)
            {
                indices.push_back(i+1);
                indices.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]>target)
            {
                j--;
            }
            else if(numbers[i]+numbers[j]<target)
            {
                i++;
            }
        }
        return indices;
        
    }
};