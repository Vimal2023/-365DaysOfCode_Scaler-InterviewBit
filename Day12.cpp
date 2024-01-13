#include <cmath>

int Solution::isPalindrome(int A) {
    // Handle negative numbers (they can't be palindromes)
    if (A < 0) {
        return 0;
    }

    int originalNumber = A;
    int reversedNumber = 0;

    // Reverse the second half of the number
    while (A > 0) {
        int digit = A % 10;
        reversedNumber = reversedNumber * 10 + digit;
        A /= 10;
    }

    // Check if the original and reversed numbers are the same
    return (originalNumber == reversedNumber) ? 1 : 0;
}
