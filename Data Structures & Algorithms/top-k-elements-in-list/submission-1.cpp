using MeanHeap = priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        MeanHeap heap;
        unordered_map<int, int> count;
        for(int i: nums)
            count[i]++;

        for(auto& entry: count){

            if(heap.size() < k){
                heap.push({entry.second, entry.first});
                continue;
            }
            if(heap.size() == k && heap.top().first < entry.second){
                heap.pop();
                heap.push({entry.second, entry.first});
                continue;
            }
            
        }
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;

        
        
    }
};
