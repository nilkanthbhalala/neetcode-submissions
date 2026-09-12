class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int inRow;
        int l = 0;
        int h = row - 1;
        int mid;

        while(l<h){
     
            mid = l + (h - l)/2;
            if(matrix[mid][0] == target)
                return true;
            else if(matrix[mid][0] < target)
                l = mid + 1;   
            else
                h = mid - 1;      
        }
        if(l == 0){
            if(matrix[l][0] == target)
                return true;
            else if(matrix[l][0] > target)
                return false;
            else
                inRow = l;
        }
        else{
            if(matrix[l][0] == target)
                return true;
            else if(matrix[l][0] > target)
                inRow = l-1;
            else
                inRow = l;
        }

        l = 0;
        h = col-1;
        while(l<=h){
            mid = l + (h-l)/2;
            if(matrix[inRow][mid] == target)
                return true;
            else if(matrix[inRow][mid] < target)
                l = mid + 1;   
            else
                h = mid - 1;    
        }
        return false;
    }
};
