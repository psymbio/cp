class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l=indices.size();
        string k=s;
        for(int i=0;i<l;i++)
        {
            k[indices[i]]=s[i];
        }
        return k;
    }
};
