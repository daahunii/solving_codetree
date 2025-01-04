#include <iostream>

using namespace std;

int M, D;

int main() {
    int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> M >> D;
    if(D <= monthdays[M-1]) cout << "Yes";
    else cout << "No";

    return 0;
}