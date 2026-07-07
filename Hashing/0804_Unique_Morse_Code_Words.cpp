class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       unordered_map<char, string> m = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."}
};
         unordered_set<string>set;
        for(string word:words){
                string temp="";
            for(char ch:word){
                temp+=m[ch]; // string add to the temp 
                }
            set.insert(temp);
            }
        
     return set.size();

    }
};
