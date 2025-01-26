#include <iostream>

using namespace std;

int N;

int recursive(int n){
    if(n == 1 || n == 2) return n;
    return recursive(n-1) + recursive(n/3);
}

int main() {
    cin >> N;
    cout << recursive(N);
    return 0;
}