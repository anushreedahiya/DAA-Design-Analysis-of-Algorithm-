// EXP: Optimal Merge Pattren
#include <iostream>
#include <climits>
#define MAX 100
using namespace std;

int mergeFiles(int files[], int size) {
    int total_cost = 0;

    for (int i = 1; i < size; i++) {
        // finding the initial smallest values
        int min1 = INT_MAX, min2 = INT_MAX;
        int min1_index = -1, min2_index = -1;  //storing the position where the smallest value are stored, initialised to -1

        for (int j = 0; j < size; j++) {
            if (files[j] != -1 && files[j] < min1) {  // marking merged file as -1 so that can be sorted again
                min2 = min1;
                min2_index = min1_index;
                min1 = files[j];
                min1_index = j;
            } else if (files[j] != -1 && files[j] < min2) {
                min2 = files[j];
                min2_index = j;
            }
        }

        // merging the two smallest files
        int cost = min1 + min2;
        total_cost += cost;

        // marking the merged files
        files[min1_index] = cost;
        files[min2_index] = -1;

        cout << "Merging files with sizes " << min1 << " and " << min2 << " (cost: " << cost << ")\n";
    }
    return total_cost;
}

int main() {
    int n;
    cout << "Enter the number of files: ";
    cin >> n;

    int files[MAX];
    cout << "Enter the sizes of the files:\n";
    for (int i = 0; i < n; i++) {
        cin >> files[i];
    }
    int total_cost = mergeFiles(files, n);

    cout << "Total minimum cost of merging files: " << total_cost << endl;
    return 0;
}

/*
// EXP: Optimal Merge Pattern
#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

// Function to display the array at each pass
void displayPass(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Display the array at this pass
        cout << "After partitioning with pivot " << arr[pi] << ": ";
        displayPass(arr, n);

        // Recursive calls to quickSort for each sub-array
        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}

// Function to perform optimal merge pattern without priority queue
void optimalMergePattern(int sublistSizes[], int n) {
    int totalMergeCost = 0;
    
    // Sort the initial sublist sizes
    sort(sublistSizes, sublistSizes + n);

    // Array to keep track of active sublist sizes after each merge
    int temp[n];
    int tempSize = n;

    // Copy sorted sublist sizes into the temp array
    for (int i = 0; i < n; i++) {
        temp[i] = sublistSizes[i];
    }

    // Optimal merging by choosing smallest pairs repeatedly
    while (tempSize > 1) {
        int first = temp[0];
        int second = temp[1];
        int mergeCost = first + second;
        totalMergeCost += mergeCost;

        // Display merging process
        cout << "Merging lists of size " << first << " and " << second
             << " with cost " << mergeCost << endl;

        // Update the temp array: place merged element and shift others
        temp[1] = mergeCost;
        for (int i = 2; i < tempSize; i++) {
            temp[i - 1] = temp[i];
        }
        tempSize--;

        // Re-sort temp array to keep smallest sizes at front
        sort(temp, temp + tempSize);
    }

    cout << "Total merge cost: " << totalMergeCost << endl;
}

int main() {
    int n;
    cout << "Enter the number of files: ";
    cin >> n;

    int arr[n];
    cout << "Enter the file sizes: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Initial file sizes: ";
    displayPass(arr, n);

    // Perform Quick Sort and display each pass
    quickSort(arr, 0, n - 1, n);

    cout << "Sorted file sizes: ";
    displayPass(arr, n);

    // Use the file sizes as input for the merge pattern
    optimalMergePattern(arr, n);

    return 0;
}
*/
