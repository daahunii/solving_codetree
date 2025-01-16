#include <iostream>

using namespace std;

int N;

int recursionSum(int n){
    if(n == 0) return 0;
    return n+recursionSum(n-1);
}

int main() {
    cin >> N;
    cout << recursionSum(N);
    return 0;
}