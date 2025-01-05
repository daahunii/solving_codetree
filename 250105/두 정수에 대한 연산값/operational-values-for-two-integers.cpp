#include <iostream>

using namespace std;

int a, b;

void sum(int &n1, int &n2){
    if(n1 > n2){
        n1 += 25;
        n2 *= 2;
    }
    else{
        n1 *= 2;
        n2 += 25;
    }
}

int main() {
    cin >> a >> b;
    sum(a,b);
    cout << a << " " << b;
    return 0;
}