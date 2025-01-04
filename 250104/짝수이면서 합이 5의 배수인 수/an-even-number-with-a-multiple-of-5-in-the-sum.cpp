#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    int a = 0;
    int b = 0;
    a = n/10;
    b = n%10;
    if(n%2 == 0 && (a+b)%5 == 0) cout << "Yes";
    else cout << "No";

    return 0;
}