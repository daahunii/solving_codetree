#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int n1, int n2){
    if(n1 < n2){
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    if(n2 == 0) return n1;
    return gcd(n2, n1%n2);
}

int lcm(int n1, int n2){
    return int(n1*n2 / gcd(n1, n2));
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = arr[0];
    for(int i=0; i<n; i++) ans = lcm(arr[i], ans);
    cout << ans;
    return 0;
}