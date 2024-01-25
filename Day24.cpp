vector<int> Solution::plusOne(vector<int> &A) {
     int n = A.size();

    // Add 1 to the least significant digit
    A[n - 1] += 1;

    int carry = A[n - 1] / 10;
    A[n - 1] %= 10;

    // Traverse the array from right to left and handle carry
    for (int i = n - 2; i >= 0; i--) {
        if (carry == 1) {
            A[i] += 1;
            carry = A[i] / 10;
            A[i] %= 10;
        }
    }

    // If there is still a carry, insert it at the beginning
    if (carry == 1) {
        A.insert(A.begin(), 1);
    }

    // Remove leading zeros, if any
    int i = 0;
    while (i < n && A[i] == 0) {
        i++;
    }

    return std::vector<int>(A.begin() + i, A.end());
}
