#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    vector<string> result;
    cin >> n >> k >> t;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if(str[i].find(t) != string::npos) 
            result.push_back(str[i]);
    }
    sort(result.begin(), result.end());
    cout << result[k-1];
    return 0;
}