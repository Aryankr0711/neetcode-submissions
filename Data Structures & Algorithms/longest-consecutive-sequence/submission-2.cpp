class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        set <int> mpp;
        for(int i=0; i<n; i++){
            mpp.insert(nums[i]);
        }
        int count=1;
        int maxcount=1;

        for(auto c:mpp){
            if(mpp.count(c+1)){
                count++;
                maxcount=max(maxcount, count);
            }
            else count=1;
        }
        return maxcount;
        
    }
};
