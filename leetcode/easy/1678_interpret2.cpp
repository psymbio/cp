class Solution {
public:
    string interpret(string c) {
        string s = "";
        for(int i = 0; i < c.length(); i++)
            if(c[i] == 'G') s.append("G");
            else if(c[i] == '(' && c[i+1] == ')') s.append("o");
            else if(c[i] == '(' && c[i+1] == 'a') s.append("al");
        return s;
    }
};
