class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
     int count=0;
     int current=0;
     for(int x:nums){
        if(count==0){
            current=x;
        }

         if(x==current){
            count++;
        }
        else count--;
     }
     return current;
}

};