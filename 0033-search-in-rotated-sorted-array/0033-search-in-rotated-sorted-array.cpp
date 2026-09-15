class Solution {
public:
int findPivotIndex(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    // Handle empty array edge case safely
    if (nums.empty()) return -1; 

    while (left < right) {
        int mid = left + (right - left) / 2; // Prevents overflow

        if (nums[mid] > nums[right]) {
            // The drop happens somewhere after 'mid'
            left = mid + 1;
        } else {
            // 'mid' could be the minimum, or the drop is to the left
            right = mid;
        }
    }

    // When left == right, we have found the index where values start increasing
    return left; 
}


    int search(vector<int>& nums, int target) {
        int i=findPivotIndex(nums);
      
              int right=i;
              int left=0;
              while(left<=right){
                int mid=left+(right-left)/2;
                if(nums[mid]>target) right=mid-1;
                else if(nums[mid]<target) left = mid+1;
                else  return mid;
              }  
              
               right=nums.size()-1;
              left=i;
              while(left<=right){
                int mid=left+(right-left)/2;
                if(nums[mid]>target) right=mid-1;
                else if(nums[mid]<target) left = mid+1;
                else  return mid;
              }
            return -1;
}   
};