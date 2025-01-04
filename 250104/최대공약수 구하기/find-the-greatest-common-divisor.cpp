#include <iostream>


using namespace std;

int n, m;

int gcd(int n1, int n2){
    if(n2==0) return n1;
    else return gcd(n2, n1%n2);
}

int main() {
    cin >> n >> m;
    int result;
    result = gcd(n, m);
    cout << result;
    return 0;
}