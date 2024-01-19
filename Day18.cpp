int Solution::Mod(int A, int B, int C) {
    if (B == 0) {
        return 1 % C;
    }

    long long result = 1;
    long long base = A % C;

    while (B > 0) {
        // If B is odd, multiply the result with the base
        if (B % 2 == 1) {
            result = (result * base) % C;
        }

        // Square the base and reduce B to half
        base = (base * base) % C;
        B /= 2;
    }

    // Ensure that result is non-negative
    result = (result + C) % C;

    return static_cast<int>(result);
}

