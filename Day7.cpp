vector<int> Solution::solve(vector<int> &A) {
    int positiveCount = 0;
    int negativeCount = 0;

    for (int num : A) {
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    vector<int> result = {positiveCount, negativeCount};
    return result;
    
}
