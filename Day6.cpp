vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    
     int N = A.size();
    
    // Iterate through upper triangle of matrix (excluding main diagonal)
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            // Swap elements across the main diagonal
            swap(A[i][j], A[j][i]);
        }
    }
    
    return A;
}
