class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n=nums.size();
         vector<int>ans;
         int left=0;
         int right=n-1;
         int first=-1,last=-1;
         while(left<=right){
            int mid=left+(right-left)/2;
           //first ocuurence ke liye left ki taraf move karenge//
            if(nums[mid]==target){
                first=mid;
                right=mid-1;
            }
            else if(nums[mid]<target) left= mid+1;
            else right=mid-1;
         }
         ans.push_back(first);



         left=0;
         right=n-1;
          while(left<=right){
            int mid=left+(right-left)/2;
           //last ocuurence ke liye right ki taraf move karenge//
            if(nums[mid]==target){
                last=mid;
                left=mid+1;
            }
            else if(nums[mid]<target) left= mid+1;
            else right=mid-1;
         }
         ans.push_back(last);
         return ans;
    }
};