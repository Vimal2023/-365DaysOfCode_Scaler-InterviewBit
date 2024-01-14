#include <vector>

int Solution::findCount(const vector<int> &A, int B) {
    // Function to find the first occurrence of B in the sorted array A
    auto findFirstOccurrence = [&](const vector<int> &arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                result = mid;
                end = mid - 1; // Move left to find the first occurrence
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    };

    // Function to find the last occurrence of B in the sorted array A
    auto findLastOccurrence = [&](const vector<int> &arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                result = mid;
                start = mid + 1; // Move right to find the last occurrence
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    };

    // Find the first and last occurrence of B
    int firstOccurrence = findFirstOccurrence(A, B);

    // If target is not found, return 0
    if (firstOccurrence == -1) {
        return 0;
    }

    int lastOccurrence = findLastOccurrence(A, B);

    // Number of occurrences is the difference between last and first occurrence indices plus 1
    return lastOccurrence - firstOccurrence + 1;
}
