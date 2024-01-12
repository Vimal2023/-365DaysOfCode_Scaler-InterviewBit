vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> result;
    if (A.empty()) {
        return result;
    }

    int top = 0, bottom = A.size() - 1, left = 0, right = A[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            result.push_back(A[top][i]);
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            result.push_back(A[i][right]);
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(A[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(A[i][left]);
            }
            left++;
        }
    }

    return result;
}
