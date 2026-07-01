class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1,
                              vector<int>& nums2,
                              vector<int>& nums3) {

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        unordered_map<int, int> m;

        for (int val : s1)
            m[val]++;

        for (int val : s2)
            m[val]++;

        for (int val : s3)
            m[val]++;

        vector<int> ans;

        for (auto &it : m) {
            if (it.second >= 2)
                ans.push_back(it.first);
        }

        return ans;
    }
};
