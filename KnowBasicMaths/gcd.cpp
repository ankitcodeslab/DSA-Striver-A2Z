// Problem: GCD of two numbers
// Approach: Euclidean Algorithm
// Time Complexity: O(log(min(x, y)))
// Space Complexity: O(1)

int findGcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
