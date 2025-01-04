#include <iostream>

using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    int s = a;
    for(int i=0; i<b-1; i++) s *= a;
    cout << s;
    return 0;
}