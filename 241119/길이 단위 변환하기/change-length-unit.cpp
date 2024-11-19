#include <iostream>
using namespace std;

int main() {
    double ft = 30.48;
    double mi = 160934;
    cout << fixed;
    cout.precision(1);
    cout << 9.2 << "ft" << " = " << ft*9.2 << "cm" << endl;
    cout << 1.3 << "mi" << " = " << mi*1.3 << "cm";
    return 0;
}