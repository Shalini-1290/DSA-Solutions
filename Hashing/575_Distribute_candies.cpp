class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        n=n/2;
    
     unordered_set<int>s;
     for(int val:candyType)
        s.insert(val);
    
     int sz=s.size();

     return min(sz,n);

    }
};
