#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int g = 13;
	double a = 0.165;

	cout << g << " * ";
    cout.precision(6);
    cout << a << " = " << g*a;
    return 0;
}