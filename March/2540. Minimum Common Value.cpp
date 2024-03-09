class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        for (int i = 0; i < nums2.size(); i++) {
            if (s.count(nums2[i]) > 0) {
                return nums2[i];
            }
        }
        return -1;
    }
};
