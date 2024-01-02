class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;         //for storing freq
        vector<vector<int>> result;    //2d array

        for(int i=0; i<n; i++){
            int freq = mp[nums[i]];          

            if(freq == result.size()){         
                result.push_back({});      //add one more row
            }

            result[freq].push_back(nums[i]);  //push ele in row
            mp[nums[i]]++;              //increase freq count
        }
        return result;
    }
};

//TC = O(n)
//SC = O(n)
