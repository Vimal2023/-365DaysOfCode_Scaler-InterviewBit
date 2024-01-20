vector<vector<int> > Solution::generateMatrix(int A) { 
     vector<vector<int>> result(A, vector<int>(A, 0));

    int left = 0, right = A - 1, top = 0, bottom = A - 1;
    int num = 1;

    while (left <= right && top <= bottom) {
        // Traverse right
        for (int i = left; i <= right; i++) {
            result[top][i] = num++;
        }
        top++;

        // Traverse down
        for (int i = top; i <= bottom; i++) {
            result[i][right] = num++;
        }
        right--;

        // Traverse left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result[bottom][i] = num++;
            }
            bottom--;
        }

        // Traverse up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result[i][left] = num++;
            }
            left++;
        }
    }

    return result;
}
