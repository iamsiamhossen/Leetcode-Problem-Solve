class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.size() - 1;

        while(i >= 0){
            // Step 1: Trailing space skip koro
            while(i >= 0 && s[i] == ' ') i--;

            // Step 2: Word er end paisi, ekhon word khujbo
            int j = i;
            while(j >= 0 && s[j] != ' ') j--;

            // Step 3: Word ta add koro
            // j+1 theke i porjonto word ache
            if(i >= 0){
                if(result != "") result += " ";
                result += s.substr(j + 1, i - j);
            }

            // Step 4: Next word er jonno
            i = j;
        }

        return result;
    }
};