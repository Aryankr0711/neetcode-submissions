class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n, 0);
        for(int i=0; i<n-1; i++){
            int ele=nums[i];
            bool found = false;
            for(int j=i+1; j<n &&!found; j++){
                if(nums[j]>ele){
                    ans[i]=j-i;
                    found=true;
                    
                }
                
            }
        }
        return ans;
    }
    
};
