class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numSet(nums.begin(), nums.end());
        if(nums.empty())
            return 0;
        
        int longestLen = 0;
        for(const int& num: numSet){
        
            if(numSet.find(num - 1) == numSet.end())
            {
                int count = 1;
                int tempNum = num;
                while(numSet.find(tempNum + 1) != numSet.end()){
                    ++count;
                    ++tempNum;
                }
                longestLen = max(longestLen, count);
            }
        }
        return longestLen;

    }
};