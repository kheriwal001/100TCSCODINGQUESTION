#include <bits/stdc++.h>
using namespace std;

// Function to insert at the beginning
void insertbeginning(int arr[], int k, int &n, int capacity) {
    
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = k;
    n++;
}

// Function to insert at the end
void insertending(int arr[], int k, int &n, int capacity) {
   
    arr[n] = k;
    n++;
}

// Function to insert at a specific position
void insertatpos(int arr[], int k, int pos, int &n, int capacity) {
   
    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = k;
    n++;
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int capacity = 7; // Maximum size of the array
    int arr[capacity] = {1, 2, 3, 4, 5}; // Initial elements
    int n = 5; // Current number of elements

    cout << "Before insertion: ";
    printArray(arr, n);

    // Insert at the beginning
    insertbeginning(arr, 6, n, capacity);
    cout << "After inserting 6 at beginning: ";
    printArray(arr, n);

    // Insert at the end
    insertending(arr, 7, n, capacity);
    cout << "After inserting 7 at end: ";
    printArray(arr, n);

    // Insert at position 4
    insertatpos(arr, 8, 4, n, capacity);
    cout << "After inserting 8 at position 4: ";
    printArray(arr, n);

    return 0;
}
