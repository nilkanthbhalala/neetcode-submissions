class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> mp;

        for(auto str: strs){
            auto tempStr = str;
            sort(tempStr.begin(), tempStr.end());
            
            if(mp.find(tempStr) == mp.end()){
                mp[tempStr] = ans.size();
                ans.push_back({str});
            }
            else{
                ans[mp.find(tempStr) -> second].push_back(str);
            }
        }
        return ans;
    }
};