//EXP merge sort with binary search
#include <iostream>
#include <string>
using namespace std;

struct WeatherData {
    string city;
    int temperature;
};

void printWeatherData(WeatherData arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].city << ": " << arr[i].temperature << endl;
    }
}

void merge(WeatherData arr[], int l, int m, int r, int &pass) {
    int n1 = m - l + 1;
    int n2 = r - m;

    WeatherData L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i].temperature <= R[j].temperature) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    cout << "Pass " << pass << ":\n";
    printWeatherData(arr, r - l + 1);
    pass++;
}

void mergeSort(WeatherData arr[], int l, int r, int &pass) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, pass);
        mergeSort(arr, m + 1, r, pass);

        merge(arr, l, m, r, pass);
    }
}

int binarySearch(WeatherData arr[], int n, string city) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].city == city) {
            return arr[mid].temperature;
        } else if (arr[mid].city < city) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // City not found
}

int main() {
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;

    WeatherData data[n];
    cout << "Enter city name and temperature:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i].city >> data[i].temperature;
    }

    cout << "\nInitial Data:\n";
    printWeatherData(data, n);

    int pass = 1;
    mergeSort(data, 0, n - 1, pass);

    cout << "\nSorted Data by Temperature:\n";
    printWeatherData(data, n);

    string city;
    cout << "\nEnter city name to search for temperature: ";
    cin >> city;

    int temp = binarySearch(data, n, city);
    if (temp != -1) {
        cout << "Temperature for " << city << ": " << temp << endl;
    } else {
        cout << city << " not found in data." << endl;
    }

    return 0;
}
