// Hash table using array

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
    
        vector<int> arr(26, 0);

        for(char i: s)
            arr[i-'a']++;

        for(char i: t){
            if(!arr[i-'a'])
                return false;
            else
                arr[i-'a']--;
        }
        return true;   
    }
};
