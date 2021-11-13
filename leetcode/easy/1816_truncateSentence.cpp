class Solution {
public:
    string truncateSentence(string s, int k) {
        string result;
        istringstream ss(s);
        string word;
        while (ss >> word && k > 0) {
            if(k == 1){
                result += word;
                break;
            }
            result += word + ' ';
            k--;
         }
        return result;
    }
};
