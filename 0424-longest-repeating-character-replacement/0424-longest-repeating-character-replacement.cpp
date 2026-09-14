class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int hash[26]={0};
        int left=0;
        int right=0;
        int maxfreq=0;
        int maxLen=0;
        while(right<n){
           hash[s[right]-'A']++;
           
           maxfreq=max(maxfreq,hash[s[right]-'A']);
           
           int replace=(right-left+1)-maxfreq;
           if(replace > k ){
            hash[s[left]-'A']--;
            left++;//so here window size decrrase so for that we have to upadate the size //
           }
        
         maxLen = max(maxLen, right-left+1);
          right++;
        }
return maxLen;
    }
};