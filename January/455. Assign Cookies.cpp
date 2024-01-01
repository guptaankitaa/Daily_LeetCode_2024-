class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g),end(g));
        sort(begin(s),end(s));

        int n = g.size();
        int m = s.size();

        int count = 0;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(g[i] <= s[j]){      // satisfy
               count++;
               i++;
            }  
             j++;
        }
        return count;
    }
};

TC = (nlogn +mlogm)
SC = (logn+logm)
