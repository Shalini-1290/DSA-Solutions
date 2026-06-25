class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m;
         for(int i=0;i<list1.length();i++){
             m[list[i]]=i;
         }
      vector<string>ans;
      int minm=INT_MAX;

       for(int j=0;j<list2.length();j++){
            if(m.find(list2[j])!=m.end()){

              int sum=m[list2[j]]+j;

              if(sum<minm){
                 minm=sum;
                ans.clear();
                ans.push_back(list2[j]);
            }
             else if(sum==minm){
                 ans.push_back(list2[j]);
             }
       }
      
    }

      return ans;

    }
