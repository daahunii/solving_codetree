#include <iostream>
#include <string>

using namespace std;

string A;

bool is_palindrome(string str) {
    bool flag = true; 
    for (int i = 0; i < str.size(); i++) { // 처음부터 끝까지 검사
        if (str[i] != str[str.size()-1-i]) { // 문자열이 다를 경우
            flag = false; // 팰린드롬이 
            break;
        }
    }
 
    return flag;
}

int main() {
    cin >> A;
    if(is_palindrome(A)) cout << "Yes";
    else cout << "No";

    return 0;
}