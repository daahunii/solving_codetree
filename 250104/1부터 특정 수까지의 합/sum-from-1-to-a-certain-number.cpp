#include <iostream>

using namespace std;

int N;

int sum(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s += i;
    }
    return s;
}

int main() {
    cin >> N;
    cout << sum(N)/10;
    return 0;
}