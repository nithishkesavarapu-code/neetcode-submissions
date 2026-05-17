class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> res;
        map<vector<int>,vector<string>> freq;

        for(string s:strs){
            vector<int> count(26,0);
            for(char c:s){
                count[c-'a']++;
            }

            freq[count].push_back(s);
        }

        for(auto& f:freq){
            res.push_back(f.second);
        }

        return res;
    }
};