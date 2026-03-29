#include <iostream>
#include <cmath>

int main() {
    const double PI = 3.14159265358979323846;
    double sum = 0.0;
    for (int n = 1; n <= 23; ++n) {
        double term = pow(2.0, -n) * cos(PI * n / 4.0);
        sum += term;
    }
    std::cout << "a) Sum = " << sum << std::endl;
    return 0;
}