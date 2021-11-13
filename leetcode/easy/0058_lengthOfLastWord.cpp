class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        int result = 0;
        while(ss >> word)
            result = word.size();
        return result;
    }
};
