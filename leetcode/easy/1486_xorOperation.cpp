class Solution {
public:
    int xorOperation(int n, int start) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int temp = 0;
        int result = start;
        for(int i = 1; i < n; ++i) {
            temp = start + (2 * i);
            result = result ^ temp;
        }
        
        return result;
    }
};
