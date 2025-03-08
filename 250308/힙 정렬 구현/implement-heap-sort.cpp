#include <iostream>

using namespace std;

int n;
int arr[100001];

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = i*2;
    int right = i*2+1;
    if(left <= size && arr[left] > arr[largest]) largest = left;
    if(right <= size && arr[right] > arr[largest]) largest = right;
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heap_sort(int arr[], int size){
    for(int i=size/2; i>=1; i--) heapify(arr, n, i);
    for(int i=size; i>1; i--){
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    heap_sort(arr, n);
    for(int i=1; i<=n; i++) cout << arr[i] << " ";

    return 0;
}
