class Solution {
public:
    bool checkIfPangram(string sentence) {
        // vector<bool>o(26,false);
        // for(int i=0;i<sentence.length();i++){
        //     o[sentence[i]-'a']=true;
        // }
        // for(int i=0;i<26;i++){
        //     if(o[i]==false){
        //         return false;
        //     }
        // }
        // return true;
        int x = 0;
        for(int i=0;i<sentence.length();i++){
            int c = sentence[i]-'a';
            x = x|(1<<c);
        }
        return x == ((1<<26)-1);
    }
};
