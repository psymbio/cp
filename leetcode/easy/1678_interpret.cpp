class Solution {
public:
    string interpret(string command) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string result;
        for(int i = 0; i < command.size(); ++i) {
            if(command.at(i) == 'G'){
                result += "G";
                continue; // go to the next and don't do anything below
            } else if (command.at(i) == '(') {
                if(command.at(i+1) == ')'){
                    result += "o";
                    continue;
                } else {
                    result += "al";
                    i+=3;
                    continue;
                }
            }
            
        }
        
        return result;
    }
};
