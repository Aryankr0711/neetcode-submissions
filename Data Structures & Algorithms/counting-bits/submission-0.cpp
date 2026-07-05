class Solution {
public:
    int hammingWeight(int n) {
        int num=n;
        int count=0;
        while(num>0){
            if(num%2==1) count++;
            num=num/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1, 0);

        int count=0;
        while(count<=n){
            ans[count]=hammingWeight(count);
            count++;
        }
        return ans;
    
    }
};
