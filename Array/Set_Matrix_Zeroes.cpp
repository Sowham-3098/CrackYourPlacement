/* class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Extra variable to handle the first column separately
        int extracell = 1;

        // First pass: mark the rows and columns that need to be zeroed
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    // If an element in the first column is zero, set extracell to 0
                    if (j == 0) {
                        extracell = 0;
                    } else {
                        // Mark the first cell of the column as zero
                        matrix[0][j] = 0;
                    }
                    // Mark the first cell of the row as zero
                    matrix[i][0] = 0;
                }
            }
        }

        // Second pass: use the marks to set elements to zero
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[0].size(); j++) {
                // If the row or column is marked, set the element to zero
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle the first row separately if it needs to be zeroed
        if (matrix[0][0] == 0) {
            for (int j = 1; j < matrix[0].size(); j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle the first column separately if it needs to be zeroed
        if (extracell == 0) {
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][0] = 0;
            }
        }
    }
};
 */