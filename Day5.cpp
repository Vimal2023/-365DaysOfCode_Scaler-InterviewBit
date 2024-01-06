int Solution::solve(vector<int> &A) {
    
    int count = 1; // Start with 1 as the first element is always counted
    int maxSoFar = A[0]; // Initialize the maximum element encountered

    for (int i = 1; i < A.size(); ++i) {
        if (A[i] > maxSoFar) {
            count++;
            maxSoFar = A[i]; // Update the maximum element
        }
    }

    return count;
}
