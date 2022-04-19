class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [](int &x, int &y) {
            bitset<32> b_x(x);
            bitset<32> b_y(y);
            
            int x_1 = b_x.count();
            int y_1 = b_y.count();
            
            if(x_1 == y_1)
                return x < y;
            
            return x_1<y_1;
        };
        
        sort(begin(arr), end(arr), lambda);
        return arr;
    }
};