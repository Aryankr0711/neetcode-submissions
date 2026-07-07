class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set <int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        //int count=1;
        int longest=1;

        for (int num : st) {

            // Only start if this is the beginning of a sequence
            if (st.count(num - 1) == 0) {

                int current = num;
                int len = 1;

                while (st.count(current + 1)) {
                    current++;
                    len++;
                }

                longest = max(longest, len);
            }
        }
        return longest;
        
    }
};
