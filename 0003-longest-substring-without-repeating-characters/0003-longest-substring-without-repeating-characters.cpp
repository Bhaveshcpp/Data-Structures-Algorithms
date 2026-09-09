class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          
        int n = s.length();
        int hash[256]={0};
        int left =0;
        int right=0;
        int ans=0;

        while(right<n){
           //for duplucates//
           if(hash[s[right]]==1){
           hash[s[left]]=0;
           left++;
           }

           else{
             //non-duplicates//
            hash[s[right]]=1; 
            ans=max(ans,right-left+1);
             right++;
           }
           }
return ans;
        }
};