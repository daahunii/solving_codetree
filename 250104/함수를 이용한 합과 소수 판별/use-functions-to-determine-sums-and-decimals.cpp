#include <iostream>

using namespace std;

int a, b;

bool IsPrime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0) return false;
    return true;
}

int SumPrime(int n1, int n2){
    int cnt = 0;
    for(int i=n1; i<=n2; i++){
        if(IsPrime(i) == true && ((i/10)+(i%10))%2 == 0) cnt++;
    }
    return cnt;
}

int main() {
    cin >> a >> b;
    cout << SumPrime(a,b);
    return 0;
}