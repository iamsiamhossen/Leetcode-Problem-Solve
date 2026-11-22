class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for (auto &st : strs)
        {
            int cnt[26] = {0};
            for (char c : st)
                cnt[c - 'a']++;

            string key;
            for (int i = 0; i < 26; i++)
            {
                key += to_string(cnt[i]);
                key += '#';
            }

            m[key].push_back(st);
        }

        vector<vector<string>> ans;
        for (auto &p : m)
            ans.push_back(move(p.second));
        return ans;
    }
};