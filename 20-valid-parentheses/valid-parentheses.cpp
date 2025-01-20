class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0) return true;
        if(s.size() == 1) return false;
        if(s[0] == ')' || s[0] == '}' || s[0] == ']') return false;
        char close = findClosing(s[0]);
        int i; int count = 0;
        for(i=1;i<s.size();i++) {
            if(s[i] == s[0]) count++;
            else if(s[i] == close) {
                if(count == 0) break;
                count--;
            }
        }
        if(i == s.size()) return false;
        if(i == 1) return isValid(s.substr(2));
        return isValid(s.substr(1, i - 1)) && isValid(s.substr(i + 1));
    }

    char findClosing(char ch) {
        if(ch == '(') return ')';
        if(ch == '{') return '}';
        return ']';
    }
};