#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickselect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pivot_index = low + rand() % (high - low + 1);
        swap(arr[pivot_index], arr[high]);
        
        int pivot_pos = partition(arr, low, high);
        
        if (pivot_pos == k) {
            return arr[pivot_pos];
        } else if (pivot_pos > k) {
            return quickselect(arr, low, pivot_pos - 1, k);
        } else {
            return quickselect(arr, pivot_pos + 1, high, k);
        }
    }
    return -1;
}

int findKthLargest(vector<int>& arr, int k) {
    return quickselect(arr, 0, arr.size() - 1, k - 1);
}

int main() {
    vector<int> arr = {12, 3, 5, 7, 19, 2, 8};
    int k = 4;
    
    cout << "The " << k << "-th largest element is: " << findKthLargest(arr, k) << endl;
    
    return 0;
}

