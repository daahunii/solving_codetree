#include <iostream>

using namespace std;

int a, b;

int cal(int a, int b){
    int n1, n2;
    if(a > b){
        n1 = a*2;
        n2 = b+10;
    }
    else{
        n1 = a+10;
        n2 = b*2;
    }

    cout << n1 << " " << n2;
    return n1, n2;

}

int main() {
    cin >> a >> b;
    int res1, res2 = cal(a, b);
    // cout << res1 << " " << res2;
    return 0;
}