#include <iostream>

using namespace std;

int Y, M, D;

bool LeapYear(int n){
    if(n%100 == 0 && n%400 != 0 || n%4 != 0) return false;
    else return true;
}

int main() {
    int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> Y >> M >> D;
    if(LeapYear(Y) == true) monthdays[1] = 29;

    if(D <= monthdays[M-1]){
        if(M>=3 && M<=5) cout << "Spring";
        else if(M>=6 && M<=8) cout << "Summer";
        else if(M>=9 && M<=11) cout << "Fall";
        else cout << "Winter";
    }
    else cout << -1;

    return 0;
}