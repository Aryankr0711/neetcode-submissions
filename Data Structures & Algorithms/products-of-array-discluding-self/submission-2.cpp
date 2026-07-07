class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        for(int i=1; i<n-1; i++){
            prefix[i]=prefix[i-1]*nums[i-1];
            suffix[n-i-1]= nums[n-i]*suffix[n-i];
        }
        prefix[n-1]=prefix[n-2]*nums[n-2];
        suffix[0]= nums[1]*suffix[1];

        //vector<int> ans(n);
        for(int i=0; i<n; i++){
            prefix[i]=prefix[i]*suffix[i];
        }
        return prefix;
       
        


    }
};
