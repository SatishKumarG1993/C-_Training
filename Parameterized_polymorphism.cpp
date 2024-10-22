#include <iostream>
#include <string>
using namespace std;
template<typename Satish>

void bubbleSort(Satish arr[], int n) {
    // Loop through all elements of the array
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place, so no need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                Satish temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
template<typename Satish>
void printArray(Satish arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    string arr1[] = {"ab","cd","ef","gh","ij"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original array: \n";
    printArray(arr, n);
    printArray(arr1, n1);

    bubbleSort(arr, n);
    bubbleSort(arr1, n1);

    cout << "Sorted array: \n";
    printArray(arr, n);
    printArray(arr1, n1);

    return 0;
}
