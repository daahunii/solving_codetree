#include <iostream>

using namespace std;

int N;

void hello(int n){
    if(n==0) return;
    hello(n-1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;
    hello(N);
    return 0;
}