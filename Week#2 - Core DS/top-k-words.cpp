class comp{
public:
    bool operator()(pair<int,string> p1, pair<int,string> p2){
        return (p1.first<p2.first)||(p1.first==p2.first&&p1.second>p2.second);
    }
};

class Solution {
public:
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string>res;
        unordered_map<string, int>map;
        priority_queue<pair<int, string>, vector<pair<int, string>>, comp>pq;
        
        for(int i = 0; i < words.size(); i++)
        {
            map[words[i]]++;
        }
        
        for(auto it = map.begin(); it != map.end(); it++)
        {
            pq.push({it->second, it->first});
        }

        for(int i = 0; i < k; i++)
        {
            string temp = pq.top().second;
            pq.pop();
            res.push_back(temp);
        }

        
        return res;
        

        
    }
};