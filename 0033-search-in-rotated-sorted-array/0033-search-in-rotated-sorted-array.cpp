class Solution {
public:
     int pivotIndex(vector<int>nums){
      int left=0;
      int right=nums.size()-1;
      while(left<right){
        int mid=left+(right-left)/2;
        if(nums[mid]>nums[right]){
            left=mid+1;
        }
        else right=mid;
      }
      return left;
     }


    int search(vector<int>& nums, int target) {
       int idx=pivotIndex(nums);
        int left=0;
        int right=idx-1;
      while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) right=mid-1;
        else left = mid +1;
      }
         left=idx;
         right=nums.size()-1;
      while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) right=mid-1;
        else left = mid +1;
      }
return -1;
    }
};