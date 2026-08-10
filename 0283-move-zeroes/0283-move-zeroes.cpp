class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans[j]=nums[i];
                j++;
            }
        }
        while(j<n){
            ans[j]=0;
            j++;
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};