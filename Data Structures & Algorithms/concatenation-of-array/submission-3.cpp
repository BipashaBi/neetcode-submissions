class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        
        int x = 2; // assuming you want to concatenate twice (same as typical problem)
        
        for (int i = 0; i < x; i++) {
            for (int n : nums) {
                ans.push_back(n);
            }
        }
        
        return ans;
    }
};