#include <iostream>

using namespace std;

int a, b, c;

int min(int n1, int n2, int n3){
    int m = 100;
    if(n1 <= m) m = n1;
    if(n2 <= m) m = n2;
    if(n3 <= m) m = n3;
    return m;
}

int main() {
    cin >> a >> b >> c;
    cout << min(a,b,c);
    return 0;
}