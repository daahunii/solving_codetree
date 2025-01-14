#include <iostream>

using namespace std;

int N;

void printNum1(int n){
    if(n==0) return;
    printNum1(n-1);
    cout << n << " ";
}
void printNum2(int n){
    if(n==0) return;
    cout << n << " ";
    printNum2(n-1);
}

int main() {
    cin >> N;
    printNum1(N);
    cout << endl;
    printNum2(N);
    return 0;
}