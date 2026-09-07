class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encoded_string = "";
        for(string str: strs){
            for(char c: str){
                if(c == '#' || c == ':')
                    encoded_string += '#';
                encoded_string += c;
            }
            encoded_string += ":";
        } 
        return encoded_string;
    }

    vector<string> decode(string s) {
        
        vector<string> decoded_strs;
        string temp = "";
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ':'){
                decoded_strs.push_back(temp);;
                temp = "";
            }
            else if(s[i] == '#'){
                temp += s[++i];
            }
            else
                temp += s[i];
        }

        return decoded_strs;
    }
};
