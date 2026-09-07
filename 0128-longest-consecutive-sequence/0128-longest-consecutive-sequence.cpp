class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
     int ans=0;
     unordered_set<int>st;
     for(int x:nums){
        st.insert(x);
     }
     for(int x:st){
        int count =0;
        if(st.find(x-1)==st.end()){
            while(st.find(x)!=st.end()){
                  count++;
                  x++;
            }
            ans=max(ans,count);
        } 
     }
    return ans;
    }
};