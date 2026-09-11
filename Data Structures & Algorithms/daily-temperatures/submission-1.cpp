class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);

        for(int i = n-2; i>=0; --i){
            if(temp[i] < temp[i+1])
                ans[i] = 1;
            else{
                int j = i+1+ans[i+1];
                while(temp[i] >= temp[j] && ans[j] != 0)
                    j += ans[j];

                if(temp[i] < temp[j])
                    ans[i] = j - i;
                else
                    ans[i] = 0;
            }
        }
        return ans;
        
    }
};