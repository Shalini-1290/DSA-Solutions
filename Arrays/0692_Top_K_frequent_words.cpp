class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        vector<string>ans;

        for(string word:words){
            m[word]++;
        }
    vector<pair<string,int>>nwords;

   for(auto &it:m){
       nwords.push_back({it.first,it.second});
   }
     sort(nwords.begin(),nwords.end(),[](pair<string,int>&a,pair<string,int>&b){
            if(a.second==b.second)
              return a.first<b.first;

           return a.second>b.second;
     });

     for(int i=0;i<k;i++){
        ans.push_back(nwords[i].first);
     }
     return ans;
    }
};
