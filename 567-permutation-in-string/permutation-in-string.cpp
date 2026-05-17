class Solution {
public:
    bool checkInclusion(string s1, string s2) {
           
        if(s1.size() > s2.size()) return false;
        
        map<char,int> m, n;
        for(auto u : s1){
            m[u]++;
        }
        
        int l = 0, tmp = 0;
        for(int r = 0; r < s2.size(); r++){
            n[s2[r]]++;
            tmp++;
            
            if(tmp == s1.size()){
                if(m == n){ return true; }
                
                n[s2[l]]--;
                if(n[s2[l]] == 0) n.erase(s2[l]); 
                l++;
                tmp--;
            }
        }
        return false;
    }
};