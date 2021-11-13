class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
                // store all types of separate jewels
        int count = 0;
        // loop through jewewls
        for (int i = 0; i < jewels.length(); i++) {
            char type = jewels[i];

            for (int j = 0; j < stones.length(); j++) {

                if (stones[j] == type) {
                    count++;
                }
            }

        }
        return count;
    }
};
