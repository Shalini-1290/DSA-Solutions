class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
     
     set<int,greater<int>> s(nums.begin(),nums.end()); 
      

        vector<int>ans;
       for(int val:s){
           if((int)ans.size()==k) break;  // ans.size() is unsigned while k is signed 

        ans.push_back(val);
       }
       
       return ans;
    }
};
