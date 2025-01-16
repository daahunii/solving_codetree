#include <iostream>

using namespace std;

int N, cnt = 0;

int recursion(int n){
    if(n == 1) return 1;
    if(n%2 == 0){
        cnt++;
        return recursion(n/2);
    }
    else{
        cnt++;
        return recursion(n/3);
    }
}

int main() {
    cin >> N;
    recursion(N);
    cout << cnt;
    return 0;
}