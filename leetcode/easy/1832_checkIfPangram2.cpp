class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.length();
        int i;
        int count[26]={0};
        if(n<26)
            return false;
       for(i=0;i<n;i++)
           count[s[i]-'a']++;
        for(i=0;i<26;i++)
        {
            if(count[i]==0)
                return false;
        }
        return true;
    }
};
