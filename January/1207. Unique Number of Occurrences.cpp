class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> unique; // used to track elements and occurences of s[]
        unordered_set<int> occurences;  // used to determine if number of occurences are unique
        
        for(int i = 0; i < arr.size(); i++){
            unique[arr[i]]++;
        }
        for(auto x: unique){
            // check if the current occurence count already exists in the unordered_set<> (NOT unique)
            if(occurences.find(x.second) != occurences.end())
                return false;
            else
            // the current occurence count does not exist in the unordered_set<>, so now insert it
                occurences.insert(x.second);
        }

        return true;
    }
};
