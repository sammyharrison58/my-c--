#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n < 0) return -1;           // error 
    if (n == 0 || n == 1) return 1;
    
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        // check overflow
        if (result < 0) return -2;  
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive number (n): ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number!\n";
        return 1;
    }

    if (n > 20) {
        cout << "Warning!!\n";
        cout << "Results for n > 20 will overflow \n\n";
    }

    // fact n
    long long fact = factorial(n);
    if (fact == -1) {
        cout << "No Factorial fornegative numbers.\n";
    } else if (fact == -2) {
        cout << n << "! = too large (overflow)\n";
    } else {
        cout << n << "! = " << fact << "\n\n";
    }

    // 2. Sum facr
    long long sum_fact = 0;
    bool sum_overflow = false;

    cout << "Sum of factorials (0! to " << n << "!):\n";
    for (int i = 0; i <= n; i++) {
        long long f = factorial(i);
        if (f < 0) {
            sum_overflow = true;
            break;
        }
        sum_fact += f;
        if (sum_fact < 0) {  // overflow
            sum_overflow = true;
            break;
        }
        if (i < 6 || i == n) {  // 1 & las display
            cout << i << "! = " << f;
            if (i < n) cout << " + ";
        }
    }

    if (sum_overflow) {
        cout << "\n... (sum  overflow)\n";
    } else {
        cout << "\nTotal sum = " << sum_fact << "\n\n";
    }

    // 3. Multiplication table
    cout << "Multiplication table for " << n << ":\n";
    cout << "------------------------------\n";
    
    for (int i = 1; i <= 12; i++) {
        cout << "  " << i << " × " << n << " = " << (i * n) << "\n";
    }
    cout << "------------------------------\n";

    return 0;
}