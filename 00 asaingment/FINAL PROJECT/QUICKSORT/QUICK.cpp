#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[end];
    int i = start - 1; 

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}


void quickSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);

        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main() {
    vector<int> arr = {10, 7, 6, 9, 39, 5};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

 cout << "sorted element are ";
    for (int i=0; i<arr.size(); i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}
