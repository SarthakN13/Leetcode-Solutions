class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        string num = to_string(n); 
        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0'; 
            if (i % 2 == 0) {
                sum += digit; 
            } else {
                sum -= digit; 
            }
        }
        return sum;
    }
};