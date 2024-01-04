int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int count_greater_A = 0;
    int count_less_B = 0;
    
    for (int num : A) {
        if (num > C) {
            count_greater_A++;
        }
    }
    
    for (int num : B) {
        if (num < C) {
            count_less_B++;
        }
    }
    
    return max(count_greater_A, count_less_B);
}
