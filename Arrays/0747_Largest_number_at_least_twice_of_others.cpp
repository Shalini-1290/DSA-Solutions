class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=INT_MIN;
        int idx=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
             if(nums[i]>ans){
                ans=nums[i];
                idx=i;
             }
        }
    
        for(int val:nums){
            if(val==ans) continue;
            if(ans<val*2)
                return -1;
        }
        return idx;
      
    }
};
