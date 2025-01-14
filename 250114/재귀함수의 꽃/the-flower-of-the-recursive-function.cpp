#include <iostream>

using namespace std;

int N;

void printNum(int n){
    if(n == 0) return;
    cout << n << " ";
    printNum(n-1);
    cout << n << " ";
}

int main() {
    cin >> N;
    printNum(N);
    return 0;
}