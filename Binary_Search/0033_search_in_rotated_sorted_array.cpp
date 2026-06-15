class Solution{
public:
//  binary search is used when the given vector or array is sorted or almost sorted 
// TC:0(logn);
int search(vector<int>&nums,int target){
   int n=nums.size();
  int st=0,end=n-1;
     while(st<=end){
          int mid=st+(end-st)/2;
          if(nums[mid)==target)  return mid;
        // left half is sorted 
          if(nums[st]<=nums[mid]){
               if(nums[st]<=target && target<nums[mid]){
                     end=mid-1;
               }
               else st=mid+1;
          }
            // right half is sorted
       else{
           if(nums[mid]<target && target<=nums[end]) 
                st=mid+1;

           else end=mid-1;
             
       }
       
      }
    return -1;
  
}
};
