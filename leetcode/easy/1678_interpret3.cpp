class Solution {
public:
    string interpret(string command) {
        string ans;
        
        for(int i = 0; i < command.size(); i ++)
        {
            switch(command[i])
            {
                case 'G' :
                    ans += "G";
                    break;
                    
                case '(' :
                    if(command[i + 1] == ')')
                    {
                        ans += "o";
                        i++;
                        break;
                    }
                    else
                    {
                        ans += "al"; //(al)
                        i += 3;
                        break;
                    }
            }
        }
        
        return ans;
    }
};
