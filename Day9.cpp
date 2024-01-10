int Solution::maxSubArray(const vector<int> &A) {
    int max_sum = A[0];  // Initialize with the first element of the array
    int current_sum = A[0];

    for (int i = 1; i < A.size(); ++i) {
        current_sum = max(A[i], current_sum + A[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}
