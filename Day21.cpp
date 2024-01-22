vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> result;
    
    int i = 0, j = 0;
    
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            result.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    return result;
}
