#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string word1;
string word2;

int main() {
    bool result = false;
    cin >> word1;
    cin >> word2;
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if(word1 == word2) result = true;
    if(result == true) cout << "Yes";
    else cout << "No";

    return 0;
}
