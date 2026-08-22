class Solution {
public:
    bool checkDivisibility(int num) {
        int n = num;
        int sum = 0;
        int product = 1;

        while (num > 0) {
        int digit = num % 10;

        sum += digit;
        product *= digit;

        num = num / 10;
    }
    return n % (sum + product) == 0;
}
};