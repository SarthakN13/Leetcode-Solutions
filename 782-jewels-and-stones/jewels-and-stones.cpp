class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        int i = 0;
        while(i<jewels.length()){
            int j = 0;
            while(j < stones.length()){
                if(stones[j] == jewels[i]){
                     count++;
                }j++;
            }
            i++;
        }
        return count;
    }
};