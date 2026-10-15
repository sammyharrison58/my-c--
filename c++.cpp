#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
long long fib_recursive(int n) {
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}
vector<long long> fib_iterative(int n) {
    vector<long long> fib(n + 1, 0);
    if (n >= 1)
        fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}
long long fib_memo(int n, vector<long long> &memo) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];

    memo[n] = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
    return memo[n];
}

long long fib_memoization(int n) {
    vector<long long> memo(n + 1, -1);
    return fib_memo(n, memo);
}
void loyalty_rewards(int years) {
    vector<long long> rewards = fib_iterative(years);

    cout << "\n===== Loyalty Reward Points =====" << endl;
    cout << "Customer loyal for " << years << " years" << endl << endl;

    for (int year = 0; year <= years; year++) {
        cout << "Year " << year << ": " << rewards[year] << " points" << endl;
    }
    cout << "=================================" << endl;
}

void performance_analysis(int n) {
    cout << "\n===== Performance Analysis (n = " << n << ") =====" << endl << endl;


    clock_t start = clock();
    long long rec = fib_recursive(n);
    clock_t end = clock();
    double time_rec = double(end - start) / CLOCKS_PER_SEC * 1000; // ms

    
    start = clock();
    vector<long long> it = fib_iterative(n);
    end = clock();
    double time_it = double(end - start) / CLOCKS_PER_SEC * 1000;


    start = clock();
    long long mem = fib_memoization(n);
    end = clock();
    double time_mem = double(end - start) / CLOCKS_PER_SEC * 1000;

    cout << "Approach                  Result     Time (ms)" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Recursive                 " << rec << "        " << time_rec << endl;
    cout << "Iterative / Tabulation    " << it[n] << "        " << time_it << endl;
    cout << "Memoization               " << mem << "        " << time_mem << endl;

    cout << "\nRecommendation: Use Iterative / Tabulation." << endl;
    cout << "===============================================" << endl;
}

int main() {
    cout << "=============================================" << endl;
    cout << "  Fibonacci Series - Customer Loyalty System" << endl;
    cout << "  Case Study Implementation in C++" << endl;
    cout << "=============================================" << endl;

    
    loyalty_rewards(10);

    performance_analysis(30);

    cout << "\nFirst 15 Fibonacci numbers:" << endl;
    vector<long long> series = fib_iterative(14);
    for (int i = 0; i <= 14; i++) {
        cout << "F(" << i << ") = " << series[i] << endl;
    }

    return 0;
}