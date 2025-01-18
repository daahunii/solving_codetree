#include <iostream>

using namespace std;

int N;

int recSum1(int n){
    if(n < 1) return 0;
    if(n%2 == 0) return n + recSum1(n-2);
}

int recSum2(int n){
    if(n < 1) return 0;
    if(n%2 != 0) return n + recSum2(n-2);
}

int main() {
    cin >> N;
    if(N%2 == 0) cout << recSum1(N);
    else cout << recSum2(N);
    return 0;
}