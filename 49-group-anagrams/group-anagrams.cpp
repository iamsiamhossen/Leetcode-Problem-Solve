class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (auto st : strs)
        {
            string tmp = st;
            sort(tmp.begin(), tmp.end());
            if (m.find(tmp) != m.end())
            {
                m[tmp].push_back(st);
            }
            else
            {
                m[tmp].push_back(st);
            }
        }

        vector<vector<string>> ans;
        for (auto &p : m)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};