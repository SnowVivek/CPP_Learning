#include <iostream>

// Function to fill numbers from 1 to 100 with memoization
int fillNumbers(int n, int memo[]) {
    if (n == 1) {  // Base case: Start at 1
        memo[n] = n;
        return n;
    }

    // Check if the value is already stored
    if (memo[n] != -1) {
        return memo[n];
    }

    // Store the current number in the memoization array
    memo[n] = fillNumbers(n - 1, memo) + 1;

    return memo[n];
}

int main() {
    int n = 100;

    // Initialize the memoization array with -1, indicating uncomputed values
    int memo[n + 1];
    std::fill_n(memo, n + 1, -1);

    // Fill numbers from 1 to 100
    fillNumbers(n, memo);

    // Find and return the position of number 50
    for (int i = 1; i <= n; i++) {
        if (memo[i] == 50) {
            std::cout << "The position of number 50 is: " << i << std::endl;
            break;
        }
    }

    return 0;
}
