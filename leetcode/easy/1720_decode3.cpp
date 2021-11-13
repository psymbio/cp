class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	vector<int>res;
        res.push_back(first);
        int temp;
        for(int i=0;i<encoded.size();i++){
            temp=first^encoded[i];
            res.push_back(temp);
            first=temp;
        }
        return res;
    }
};
