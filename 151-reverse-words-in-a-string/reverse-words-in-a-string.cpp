class Solution {
public:
    string reverseWords(string s) {
        
        // Step 1: পুরো string reverse
        reverse(s.begin(), s.end());

        // Step 2: প্রতিটা word reverse
        int start = 0;
        for(int i = 0; i <= s.size(); i++){
            if(i == s.size() || s[i] == ' '){
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        // Step 3: Extra spaces remove
        int i = 0, j = 0;
        while(j < s.size()){
            // space skip koro
            while(j < s.size() && s[j] == ' ') j++;
            
            // word copy koro
            while(j < s.size() && s[j] != ' '){
                s[i++] = s[j++];
            }
            
            // word er পরে একটা space দাও
            if(j < s.size()) s[i++] = ' ';
        }

        // trailing space remove
        if(i > 0 && s[i-1] == ' ') i--;
        
        return s.substr(0, i);
    }
};