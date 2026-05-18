class Solution {
public:
    string reverseWords(string s) {
            int i = s.size()-1;
            string result="";
            while(i>=0){
                while(i>=0 and s[i]==' '){
                    i--;
                }
                int j=i;
                while(j>=0 and s[j]!=' ') j--;
                if(i >= 0){
                if(result != "") result += " ";
                result += s.substr(j + 1, i - j);
            }
                i=j;
                

            }
            return result;
    }
};