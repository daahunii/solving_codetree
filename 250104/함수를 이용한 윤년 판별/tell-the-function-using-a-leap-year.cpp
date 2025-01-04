#include <iostream>

using namespace std;

int y;

bool LeapYear(int n){
    if(n%100 == 0 && n%400 != 0 || n%4!=0) return false;
    else return true;
}

int main() {
    cin >> y;
    if(LeapYear(y) == true) cout << "true";
    else cout << "false";
    return 0;
}
