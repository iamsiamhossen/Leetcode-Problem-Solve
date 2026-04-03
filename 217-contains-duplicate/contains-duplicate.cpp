
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
    // complexity o(n); 
        unordered_set<int> m;
        for(auto u:nums){
            if(m.count(u)) return true;
             m.insert(u);
        }

        return false;

    
    }
};