int Solution::coverPoints(vector<int> &A, vector<int> &B) {
     int n = A.size();
        int steps = 0;

        for (int i = 1; i < n; ++i) {
            int x1 = A[i - 1];
            int y1 = B[i - 1];
            int x2 = A[i];
            int y2 = B[i];
            steps += std::max(std::abs(x2 - x1), std::abs(y2 - y1));
        }

        return steps;
    
}
