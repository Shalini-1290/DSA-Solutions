class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int>m;

        for(int val:nums){
            m[val]++;
        }

       sort(nums.begin(), nums.end(), [&](int a, int b){ // comparator 
              if(m[a] == m[b])
              return a > b;
           return m[a] < m[b];
       });
     
     return nums;

    }
};
