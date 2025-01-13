#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int main() {
    cin >> text;
    cin >> pattern;

    if(text.find(pattern) != string::npos) cout << text.find(pattern) << endl;
    else cout << -1 << endl;

    return 0;
}