#include <iostream>
#include <cmath>
using namespace std;
class BasicRecursion {
public:
    // 1. Print 1 to N (printing during unwinding)
    void print_1_to_n(int n) {
        if (n <= 0) return;
        print_1_to_n(n - 1);
        cout << n << " ";
    }

    // 2. Print N to 1 (printing during winding)
    void print_n_to_1(int n) {
        if (n <= 0) return;
        cout << n << " ";
        print_n_to_1(n - 1);
    }

    // 3. Factorial of N
    long long factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }

    // 4. Sum of 1 to N
    long long sum_of_1_to_n(int n) {
        if (n <= 0) return 0;
        return n + sum_of_1_to_n(n - 1);
    }

    // 5. Count Digits in a non-negative integer n
    int count_digits(long long n) {
        if (n == 0) return 1; // Special case for input 0
        if (n < 10) return 1;
        return 1 + count_digits(n / 10);
    }
};

int main() {
    BasicRecursion obj;
    int n = 5;

    cout << "Print 1 to " << n << ": ";
    obj.print_1_to_n(n);
    cout << "\n";

    cout << "Print " << n << " to 1: ";
    obj.print_n_to_1(n);
    cout << "\n";

    cout << "Factorial of 4: " << obj.factorial(4) << "\n";
    cout << "Sum of 1 to " << n << ": " << obj.sum_of_1_to_n(n) << "\n";

    long long test_num = 1432;
    cout << "Count digits in " << test_num << ": " << obj.count_digits(test_num) << "\n";

    return 0;
}
