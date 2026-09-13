class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int left=0;
        int right=0;
        int maxfreq=0;
        int freq[26]={0};
        int ans=0;
        while(right<n){
            freq[s[right]-'A']++;

            maxfreq=max(maxfreq,freq[s[right]-'A']);

            int changes = (right - left + 1) - maxfreq;

            while(changes >k){
                freq[s[left]-'A']--;
                left++;
                changes = (right - left + 1) - maxfreq;
            }

            ans=max(ans,right-left+1);
            right++;
            }
            return ans;
    }
};