#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str+n);
    cout << str[k];
    return 0;
}