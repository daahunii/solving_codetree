#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    vector<int> sortarr;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        sortarr.push_back(arr[i]);
        if(i%2 == 0){
            sort(sortarr.begin(), sortarr.end());
            cout << sortarr[sortarr.size()/2] << " ";
        }
    }

    return 0;
}