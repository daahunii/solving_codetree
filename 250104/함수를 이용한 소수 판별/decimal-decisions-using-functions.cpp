#include <iostream>

using namespace std;

int a, b;

bool IsPrime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0) return false;
    return true;
}

int SumPrime(int n1, int n2){
    int sum = 0;
    for(int i=n1; i<=n2; i++){
        if(IsPrime(i) == true) sum += i;
    }
    return sum;
}

int main() {
    cin >> a >> b;
    cout << SumPrime(a,b);

    return 0;
}


