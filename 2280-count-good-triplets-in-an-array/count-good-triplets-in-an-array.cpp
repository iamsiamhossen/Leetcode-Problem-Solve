#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int ,int> mp;
        for(int i=0;i< nums1.size();i++){
            mp[nums1[i]]=i;
        }
        long long t=0,n=nums2.size();
        ordered_set st;

        for(int i=0;i<n;i++){
            int idx = mp[nums2[i]];
            int lft= st.order_of_key(idx);
            int rt=(n-1-idx)-(st.size()-lft);
            t+= 1ll*lft*rt;
            st.insert(idx);
        }
        return t;
    }
};