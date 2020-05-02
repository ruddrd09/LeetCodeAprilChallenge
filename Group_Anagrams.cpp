class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        unordered_map<string, vector<string>> m;
        for(auto i: strs) {
            string x = i;
            sort(i.begin(), i.end());
            m[i].push_back(x);
        }
        for(auto i: m) {
            s.push_back(i.second);
        }
        return s;
    }
};