#include<unordered_map>
#include<string>

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
            return false;

        unordered_map<char, int>mp;
        
        for(char i: s)
            mp[i]++;
        
        for(char i: t)
        {
            if(!mp[i])
                return false;
            else
                mp[i]--;
        }
        return true;

    }
};
