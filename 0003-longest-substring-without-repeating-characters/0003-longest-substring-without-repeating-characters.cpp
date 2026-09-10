class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     //given s= abcabcbb//
     int n=s.length();
     int ans=0;
     int left=0;
     int right=0;
     int hash[256]={0};
     while(right<n){
        if(hash[s[right]] == 0){
            hash[s[right]]=1;
            ans=max(ans,right-left+1);
            right++;
        }
        else{
        hash[s[left]]=0;
        left++;
        
       }
     }
      return ans;
     } 
};