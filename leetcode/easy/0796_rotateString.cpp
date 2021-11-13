class Solution {
public:
    bool rotateString(string s, string goal) {
        string ss = s + s;
        if(s.size() == goal.size() && ss.find(goal) != string::npos) {
            return true;
        }
        return false;
    }
};
