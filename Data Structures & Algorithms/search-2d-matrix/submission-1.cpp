class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;
        int high = rows - 1;
        int candidateRow = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[mid][0] == target)
                return true;

            if (matrix[mid][0] < target) {
                candidateRow = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (candidateRow == -1)
            return false;


        low = 0;
        high = cols - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[candidateRow][mid] == target)
                return true;
            else if (matrix[candidateRow][mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};