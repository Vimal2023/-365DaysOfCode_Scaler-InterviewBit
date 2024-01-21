vector<int> Solution::maxset(vector<int> &A) {
    long long maxSum = 0;
    long long currentSum = 0;
    int start = 0;
    int end = -1;
    int currentStart = 0;
    int currentEnd = -1;

    for (int i = 0; i < A.size(); ++i) {
        if (A[i] >= 0) {
            currentSum += A[i];
            currentEnd = i;
        } else {
            currentSum = 0;
            currentStart = i + 1;
            currentEnd = i;
        }

        if (currentSum > maxSum || (currentSum == maxSum && currentEnd - currentStart > end - start)) {
            maxSum = currentSum;
            start = currentStart;
            end = currentEnd;
        }
    }

    vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(A[i]);
    }

    return result;
}
