class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> need(128, 0);
        vector<int> window(128, 0);

        // Build need array
        int required = 0;
        for (char c : t) {
            if (need[c] == 0)
                required++;
            need[c]++;
        }

        int formed = 0;
        int left = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char ch = s[right];
            window[ch]++;

            // Requirement for this character just satisfied
            if (need[ch] > 0 && window[ch] == need[ch])
                formed++;

            while (formed == required) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                // Requirement broken
                if (need[leftChar] > 0 &&
                    window[leftChar] < need[leftChar])
                    formed--;

                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};