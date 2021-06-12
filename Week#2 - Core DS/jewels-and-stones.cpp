class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        if(jewels.size() == 0) return 0;
        unordered_set<char>set;
        int res = 0;
        for(char c: jewels) set.insert(c);
        
        for(char c: stones)
        {
            if(set.find(c) != set.end()) res++;
        }
        
        return res;
    }
};