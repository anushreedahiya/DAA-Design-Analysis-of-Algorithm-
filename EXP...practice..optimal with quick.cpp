//EXP...quick sort with optimal merge
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high, int &pass) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

    cout << "Pass " << pass << ": ";
    printArray(arr, high + 1);  // Display array for each pass
    pass++;
    return i + 1;
}

void quickSort(int arr[], int low, int high, int &pass) {
    if (low < high) {
        int pi = partition(arr, low, high, pass);

        quickSort(arr, low, pi - 1, pass);
        quickSort(arr, pi + 1, high, pass);
    }
}

// Optimal Merge Pattern function
void optimalMerge(int arr[], int n) {
    int mergedArray[n], k = 0;
    for (int i = 0; i < n; i++) {
        mergedArray[k++] = arr[i];
    }
    cout << "\nMerged Array: ";
    printArray(mergedArray, n);
}

int main() {
    int n, pass = 1;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nInitial Array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1, pass);

    cout << "\nSorted Array: ";
    printArray(arr, n);

    optimalMerge(arr, n);  // Perform optimal merge
    return 0;
}

