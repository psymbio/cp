class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length())
            return false;
        if(s.length() == 0 || t.length() == 0)
            return true;
        int j = 0;
        for(int i = 0; i < t.length(); i++) {
            if (j < s.length())
                if(s.at(j) == t.at(i))
                    j++;
        }
        if(j == s.length())
            return true;
        return false;
    }
};
