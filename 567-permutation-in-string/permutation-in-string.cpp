class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        map<char,int> m, n;
        for(auto u : s1) m[u]++;

        int matches = 0;
        int total = m.size(); // কতটা unique char match করতে হবে

        int l = 0;
        for(int r = 0; r < s2.size(); r++){
            char rc = s2[r];

            // Right character add koro
            n[rc]++;
            if(m.count(rc) && n[rc] == m[rc]){
                matches++; // এই character perfectly match!
            }

            // Window size thik rakho
            if(r - l + 1 > s1.size()){
                char lc = s2[l];
                if(m.count(lc) && n[lc] == m[lc]){
                    matches--; 
                }
                n[lc]--;
                l++;
            }

            // Check koro
            if(matches == total) return true;
        }
        return false;
    }
};