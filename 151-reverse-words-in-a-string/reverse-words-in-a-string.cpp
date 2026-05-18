class Solution {
public:
    string reverseWords(string s) {
            stringstream ss(s);
    vector<string> arr;
    string temp;
    string word;
    while (ss >> word)
    {
        arr.push_back(word);
    }
    reverse(arr.begin(), arr.end());
    int x1=0;
    for(auto &x : arr)    {
        x1++;
        if(x1==arr.size()){
            temp += x;
        }
        else{
            temp += x + " ";
        }
        
    }
    return temp;
    }
};