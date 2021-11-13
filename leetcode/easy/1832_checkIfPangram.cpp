class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> alpha_set;
        if (sentence.size() < 26)
            return false;
        else {
            for(char c: sentence) alpha_set.insert(c);
        }
        if (alpha_set.size() == 26) return true;
        else return false;
    }
};
