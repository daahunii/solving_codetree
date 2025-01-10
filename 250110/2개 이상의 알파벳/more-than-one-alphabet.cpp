#include <iostream>
#include <string>

using namespace std;

// 문자열에 알파벳이 2개 이상인지 여부를 반환합니다.
bool IsMoreTwoalp(string str) {
    // 하나라도 서로 다른 알파벳이 있다면
    // 그 문자열은 알파벳이 2개 이상입니다.
    int len = str.length();
    for(int i = 0; i < len; i++)
        if(str[i] != str[0])
            return true;

    return false;
}

int main() {
    // 변수 선언 및 입력:
    string A;
    cin >> A;

    if(IsMoreTwoalp(A))
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}