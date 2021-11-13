class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jewel_set;
        int result = 0;
        for(char c: jewels) jewel_set.insert(c);
        for(char c: stones)
            if(jewel_set.find(c) != jewel_set.end())
                result++;
        
        return result;
    }
};
