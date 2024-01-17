void Solution::setZeroes(vector<vector<int> > &A) {
    unordered_set<int> rows_to_zero;
        unordered_set<int> cols_to_zero;

        // Identify rows and columns to be set to zero
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[0].size(); ++j) {
                if (A[i][j] == 0) {
                    rows_to_zero.insert(i);
                    cols_to_zero.insert(j);
                }
            }
        }

        // Set rows to zero
        for (int row : rows_to_zero) {
            for (int j = 0; j < A[0].size(); ++j) {
                A[row][j] = 0;
            }
        }

        // Set columns to zero
        for (int col : cols_to_zero) {
            for (int i = 0; i < A.size(); ++i) {
                A[i][col] = 0;
            }
        }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
