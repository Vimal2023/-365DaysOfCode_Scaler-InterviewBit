int Solution::isPalindrome(string A) {
     string cleanStr;
    for (char &c : A) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
        }
    }
    int left = 0, right = cleanStr.length() - 1;
    while (left < right) {
        if (cleanStr[left] != cleanStr[right]) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}
