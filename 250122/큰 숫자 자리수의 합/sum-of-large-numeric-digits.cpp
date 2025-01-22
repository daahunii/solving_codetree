#include <iostream>

using namespace std;

int a, b, c;

int recursive(int n){
    if(n < 10) return n;
    return (n%10) + recursive(n/10);
}

int main() {
    cin >> a >> b >> c;
    int N = a*b*c;
    cout << recursive(N);
    return 0;
}