// Somehow much much much faster and I can't even understand 
// ah fuck it.

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> result;
        result.push_back(first);
        
        for(int i = 0; i < encoded.size(); ++i) {
            result.push_back(result[i] ^ encoded[i]);
        }
        
        return result;
    }
};
