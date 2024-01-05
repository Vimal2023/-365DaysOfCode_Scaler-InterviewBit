vector<int> Solution::solve(vector<int> &A) {
    
     vector<int> non_empty;
    vector<int> empty;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] != 0) {
            non_empty.push_back(A[i]);
        } else {
            empty.push_back(A[i]);
        }
    }
    
    // Combine non-empty and empty packets
    for (int i = 0; i < empty.size(); ++i) {
        non_empty.push_back(empty[i]);
    }
    
    return non_empty;
}
