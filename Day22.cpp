int Solution::removeDuplicates(vector<int> &A) {
    if (A.empty()) {
        return 0;
    }

    int index = 0;

    for (int i = 1; i < A.size(); i++) {
        if (A[i] != A[index]) {
            index++;
            A[index] = A[i];
        }
    }

    return index + 1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
