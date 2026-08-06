class Solution {
public:
    int smallestNumber(int n, int t) {
        int number = n;

        while (true) {
            int temp = number;
            int product = 1;

            while (temp > 0) {
                product *= (temp % 10);
                temp /= 10;
            }

            if (product % t == 0) {
                return number;
            }

            number++;
        }
    }
};