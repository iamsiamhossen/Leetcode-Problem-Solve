class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        map<char,int> m, n;
        for(auto u : s1) m[u]++;
        int k = s1.size(); 
        for(int r = 0; r < s2.size(); r++){
            n[s2[r]]++;
            if(r >= k){
               
                char leftChar = s2[r - k];
                n[leftChar]--;
                if(n[leftChar] == 0) n.erase(leftChar);
            }
            if(r >= k - 1){
                if(m == n) return true;
            }
        }

        return false;
    }
};