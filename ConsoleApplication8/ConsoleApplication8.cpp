#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << fixed << setprecision(4);
    double s = 0;
    double pi = 3.14159265358979323846;
    for (int n = 1; n < 24; n += 1) {
        s += pow(2, -n) * cos((pi * n) / 4);
    }
    cout << "Результат:" << s << endl;
}
