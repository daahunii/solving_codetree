#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> re;
    for(int i=0; i<N*2; i++){
        int num;
        cin >> num;
        arr1.push_back(num);
        arr2.push_back(num);
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<>());
    int max = 0;
    for(int i=0; i<arr1.size(); i++){
        int val = arr1[i] + arr2[i];
        if(max < val) max = val;
    }
    cout << max;
    return 0;
}