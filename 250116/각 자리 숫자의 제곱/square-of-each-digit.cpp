#include <iostream>

using namespace std;

int N;

int recSqSum(int n){
    if(n < 10) return n*n;
    return recSqSum(n/10) + (n%10)*(n%10);
}

int main() {
    cin >> N;
    cout << recSqSum(N);
    return 0;
}