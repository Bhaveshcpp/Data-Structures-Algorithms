class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int N=nums.size();
        unordered_map<int,int>mp(N);
        for(int x : nums){
           if(mp.find(x) != mp.end()) continue;
           else mp[x] = 1;; 
        }
        for(int i=1;i<=N;i++){
            if(mp.find(i) == mp.end()) return i;
            else continue;
        }
return N+1;
    }
};