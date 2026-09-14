class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int hash[26]={0};
        int left=0;
        int right=0;
        int maxfreq=0;
        int maxLen=0;
        for(int right=0;right<n;right++){
           hash[s[right]-'A']++;
           
           maxfreq=max(maxfreq,hash[s[right]-'A']);
           int size=right-left+1;
           
           int replace=size-maxfreq;
           while(replace > k ){
            hash[s[left]-'A']--;
            left++;//so here window size decrrase so for that we have to upadate the size //

            size=right-left+1;
            replace=size-maxfreq;
           }
         maxLen = max(maxLen, size);
        }
return maxLen;
    }
};