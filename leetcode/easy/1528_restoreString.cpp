class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // basically making a vector map thingy which sorts by index of indices.
        vector<pair<int,char>> sort_string;
        string result;
        for (int i=0; i < indices.size(); i++)
            sort_string.push_back(make_pair(indices[i],s[i]));
        sort(sort_string.begin(), sort_string.end());
        for (int i=0; i < indices.size(); i++)
            result += sort_string[i].second;
        return result;
    }
};
