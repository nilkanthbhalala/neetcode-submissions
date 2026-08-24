class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;

        for(const auto& str: strs){

            vector<int>freq(26, 0);
            for(const auto c: str)
                freq[c - 'a']++;

            // string key = to_string(freq[0]);
            // for(int i = 1; i<freq.size(); i++)
            //     key = key + "," + to_string(freq[i]);
            
            string key;
            for(int i: freq)
                key = key + "," + to_string(i);

            mp[key].push_back(str);
        }
        for(auto ele: mp){
            res.push_back(ele.second);
        }
        return res;
    }
};