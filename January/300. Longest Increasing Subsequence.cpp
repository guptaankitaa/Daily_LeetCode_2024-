class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted; //empty at the beginning

        for(int i = 0; i < n; i++){
            auto it = lower_bound(begin(sorted), end(sorted), nums[i]); //just greater than or rqual to num[i]

            if(it == end(sorted)){
                sorted.push_back(nums[i]);
            }
            else{
                *it = nums[i]; //replace
            }
        }
        return sorted.size();
    }
};
//TC = O(nlogn)
//SC = O(n)
