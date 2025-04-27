class Solution {
public:
    int getLucky(string s, int k) {
        long long int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int val = s[i] - 96;
            if(val >= 10)
            {
                sum+=val/10;
                sum+=val%10;
            }
            else sum+=val;
        }
        k--;
        while(k--)
        {
            int temp = 0;
            while(sum)
            {
                temp += sum%10;
                sum=sum/10;
            }
            sum = temp;
        }
        return sum;
    }
};