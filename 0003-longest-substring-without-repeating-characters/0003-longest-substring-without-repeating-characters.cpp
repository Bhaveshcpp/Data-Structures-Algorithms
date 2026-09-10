class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     //given s= abcabcbb//
     int n=s.length();
     int ans=0;
     for(int i=0;i<n;i++){
        int hash[256]={0};
        int len=1;
        for(int j=i;j<n;j++){
              if(hash[s[j]]==0){
                hash[s[j]]=1;
                len=j-i+1;
            }
              else break;
        }
         ans=max(ans,len);
        }
        return ans;
     }
     
};