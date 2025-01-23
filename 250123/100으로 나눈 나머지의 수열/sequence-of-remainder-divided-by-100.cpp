#include <iostream>
#include <math.h>
using namespace std;

int N;

int su(int n){
    if(n==2) return 4;
    if(n==1) return 2;
    return (su(n-1) * su(n-2))%100;
}

int main() {
    cin >> N;
    cout << su(N);
    return 0;
}