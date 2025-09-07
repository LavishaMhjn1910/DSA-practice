class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
    int digitSum = 0, temp = x;
        while (temp > 0) {
            digitSum += temp % 10;
            temp /= 10;
        }
        return (x % digitSum == 0) ? digitSum : -1;    
    }
};
