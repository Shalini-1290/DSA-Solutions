class Solution {
public:
    bool buddyStrings(string s, string goal) {

        // Lengths must be equal
        if (s.size() != goal.size())
            return false;

        // Case 1: Strings are already equal
        if (s == goal) {

            unordered_set<char> st;

            for (char ch : s) {
                if (st.count(ch))
                    return true;    // duplicate found
                st.insert(ch);
            }

            return false;           // no duplicate
        }

        // Case 2: Strings are different
        vector<int> diff;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        // Exactly two positions should differ
        if (diff.size() != 2)
            return false;

        int i = diff[0];
        int j = diff[1];

        return (s[i] == goal[j] && s[j] == goal[i]);
    }
};
