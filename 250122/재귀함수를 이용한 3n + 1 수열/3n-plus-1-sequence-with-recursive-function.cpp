#include <iostream>

using namespace std;

int n, cnt=0;

int recur(int n){
    if(n == 1) return n;
    cnt++;
    if(n%2 == 0) return recur(n/2);
    else return recur(3*n+1);
}

int main() {
    cin >> n;
    recur(n);
    cout << cnt;
    return 0;
}