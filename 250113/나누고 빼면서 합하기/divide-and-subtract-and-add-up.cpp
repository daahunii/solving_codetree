#include <iostream>

using namespace std;

int n, m, sum = 0;
int A[100];


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    while (true){
        sum += A[m-1];
        if (m == 1) break;
        if (m%2 == 0) m /= 2;
        else m -= 1;
    }

    cout << sum << endl;

    return 0;
}