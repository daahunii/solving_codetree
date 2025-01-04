#include <iostream>

using namespace std;

int a, b;

bool IsOnjeonsu(int n) {
    if(n % 2 == 0)
        return false;
    if(n % 10 == 5)
        return false;
    if(n % 3 == 0 && n % 9 != 0)
        return false;
    return true;
}

int CountOnjeonsu(int n1, int n2){
    int cnt = 0;
    for(int i=n1; i<=n2; i++)
        if(IsOnjeonsu(i) == true) cnt++;
    return cnt;
}

int main() {
    cin >> a >> b;
    cout << CountOnjeonsu(a,b);
    return 0;
}


