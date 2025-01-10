#include <iostream>
using namespace std;

int n;
int arr[50];

int abs(int n){
    if(n < 0) n = n * (-1);
    return n;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] = abs(arr[i]);
    }
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}