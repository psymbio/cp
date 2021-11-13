class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
        for(;k && i<s.size(); ++i) {
            if(s[i]==' ') {
                --k;
            }
        }
        if(i==s.size()) {
            return s;
        }
        s.erase(s.begin()+i-1, s.end());
        return s;
    }
};
