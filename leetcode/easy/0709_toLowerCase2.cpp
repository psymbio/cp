class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); i++) {
            const char &c = str[i];
            const char &a = 'A';
            if (a <= c && c <= 'Z') {
                str[i] = 'a' + (c - a);
            }
        }
        
        return str;
    }
};
