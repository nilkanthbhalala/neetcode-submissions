#include<unordered_map>
#include<string>
#include<algorithm>


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




// class Solution {
// public:
//     bool isAnagram(string s, string t) 
//     {
//         if(s.size() != t.size())
//             return false;

//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         for(int i = 0; i< s.size(); i++)
//         {
//             if(s[i] != t[i])
//                 return false;
//         }
//         return true;
//     }
// };




