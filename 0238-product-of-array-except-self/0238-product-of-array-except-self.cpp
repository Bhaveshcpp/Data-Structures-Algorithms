class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
     int n=arr.size();
     vector<int>prefprod(n),suffprod(n),res(n);
     prefprod[0]=1;
     for(int i=1;i<n;i++){
        prefprod[i]=prefprod[i-1]*arr[i-1];
     }  
     suffprod[n-1]=1;
     for(int i=n-2;i>=0;i--){
        suffprod[i]=suffprod[i+1]*arr[i+1];
     } 
     for(int i=0;i<n;i++){
        res[i]=prefprod[i]*suffprod[i];
     } 
     return res;
}
};