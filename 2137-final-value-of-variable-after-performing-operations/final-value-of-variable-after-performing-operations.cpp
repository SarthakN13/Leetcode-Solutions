class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
     int x=0;
        for(string &word : operations){
            if(word[1]=='-')
                x--;
            else
                x++;
            
        }
        return x;
    }
};