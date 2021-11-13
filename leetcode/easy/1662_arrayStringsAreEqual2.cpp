class Solution {
public:
    struct Data {
        Data(int s) : size(s) {}
            int size;
            int i = 0;
            int i_word = 0;
    };
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        if (word1.empty() &&word2.empty()) return true;
        if (word2.empty() || word1.empty()) return false;
        
        
        struct Data d1(word1.size()), d2(word2.size());
        while (d1.i < d1.size && d2.i < d2.size) {
            if (d1.i_word == word1[d1.i].length()) {
                d1.i++;
                d1.i_word = 0;
            }
            if (d2.i_word == word2[d2.i].length()) {
                d2.i++;
                d2.i_word = 0;
            }
            if (d1.i == d1.size || d2.i == d2.size) break;
            
            if (word1[d1.i][d1.i_word] != word2[d2.i][d2.i_word]) {
                return false;
            }
            d1.i_word++;
            d2.i_word++;
        }
        return d1.i == d1.size && d2.i == d2.size;
    }
};
