class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string temp="";
        for(int i=0; i<n; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || 
            (s[i]>='0' && s[i]<='9')){
                temp+=s[i];
            }
        }
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        int r=temp.size()-1;
        int l=0;
        while(l<=r){
            if(temp[l]!=temp[r]) return false;
            else {
                l++;
                r--;
            }
        }
        return true;
        
    }
};
