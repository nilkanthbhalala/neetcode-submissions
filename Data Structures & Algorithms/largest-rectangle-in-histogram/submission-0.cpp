class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans = 0;

        for (int i = 0; i <= n; ++i) {
            
            int currentHeight = (i == n ? 0 : heights[i]);

            while ( !st.empty() && currentHeight < heights[st.top()] ) {
                int heightIndex = st.top();
                st.pop();

                int leftBoundary = st.empty() ? -1 : st.top();
                int width = i - leftBoundary - 1;

                ans = max(ans, heights[heightIndex] * width);
            }

            st.push(i);
        }

        return ans;
    }
};