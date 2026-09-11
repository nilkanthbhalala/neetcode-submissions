class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> indxSt;
        int n = temp.size();
        vector<int> ans(n);
        indxSt.push(n-1);
        ans[n-1] = 0;

        for(int i = n-2; i>=0; --i){

            int top = indxSt.top();
            while(temp[i] >= temp[top] && i != top){

                indxSt.pop();
                if(indxSt.size() == 0)
                    indxSt.push(i);
                top = indxSt.top();
            }
            ans[i] = top - i;
            indxSt.push(i);
        }
        return ans;
    }
};