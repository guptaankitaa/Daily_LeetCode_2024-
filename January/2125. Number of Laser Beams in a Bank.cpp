class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();

        int prevCount = 0;
        int beam = 0;
        for(int i = 0; i < n; i++){

            int currentCount = 0;
            for(char &ch : bank[i]){
                if(ch == '1'){
                    currentCount++;
                }
            }
             beam += currentCount * prevCount;
           
             if(currentCount != 0){
                 prevCount = currentCount;
             }

        }
      
        return beam;
    }
};
// TC = O(n*m)  
// SC = O(1)
