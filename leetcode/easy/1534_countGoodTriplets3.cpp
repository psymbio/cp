class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans = 0;
        auto i = arr.begin();
        for (;i != arr.end();i++) {
            for (auto j = i+1; j != arr.end(); j++) {
                if (abs(*i-*j) <= a) {
                    for (auto k = j+1; k != arr.end(); k++) {
                        if (abs(*j-*k) <= b && abs(*i-*k) <= c) {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
