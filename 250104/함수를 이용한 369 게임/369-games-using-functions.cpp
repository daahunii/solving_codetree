#include <iostream>
#include <vector>
using namespace std;

int a, b;

int tsn(int n1, int n2){
    int cnt = 0;
    vector<int> arr;
    for(int i=n1; i<=n2; i++){
        int num = i;
        while(num != 0){
            arr.push_back(num%10);
            num /= 10;
        }
        for(int j=0; j<arr.size(); j++){
            if(arr[j]%3 == 0 || i%3 == 0){
                cnt++;
                arr.clear();
                break;
            }
            else continue;
        }
    }
    return cnt;
}

int main() {
    cin >> a >> b;
    cout << tsn(a,b);
    return 0;
}