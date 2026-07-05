class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(auto c: nums){
            mpp[c]++;
        }
        for(auto c: mpp){
            if(c.second>1) return true;
        }
        return false;
    }
};