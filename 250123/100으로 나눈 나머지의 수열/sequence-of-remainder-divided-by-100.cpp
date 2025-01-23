#include <iostream>
#include <math.h>
using namespace std;

int N;

int fibo(int n){
    if(n <= 2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
    cin >> N;
    int two = pow(2,fibo(N+1));
    cout << (two%100);
    return 0;
}