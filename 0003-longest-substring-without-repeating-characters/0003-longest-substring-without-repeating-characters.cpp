class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     //given s= abcabcbb//
     int n=s.length();
     int hash[256]={0};
     int left=0;
     int right=0;
     int len=0;
     while(right<n){
          
        if(hash[s[right]]==0){
            hash[s[right]]=1;
            len=max(len,right-left+1);
            right++;
        }
        else{
            hash[s[left]]=0;
            left++;
        }
     }
    return len;
    } 
};