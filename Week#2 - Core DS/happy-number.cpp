class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int>set;
        int sum = 0;
        
        while(1)
        {
            int sum = 0;
            while(n > 0)
            {
                int last = n%10;
                int sq = last*last;
                sum += sq;
                n /= 10;
            }
            if(sum == 1) return true;
            if(set.find(sum) != set.end())
            {
                return false;
            }
            set.insert(sum);
            n = sum;
        }
        
        return true;
        
    }
};