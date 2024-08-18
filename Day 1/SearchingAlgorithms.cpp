#include <iostream>

using namespace std;

void linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            cout << "Number found at index " << i << "." << endl;
            return;
        }

    }
    cout << "Number not found." << endl;
}

void binarySearch(int array[], int size, int key) {
    int low = 0;
    int high = size - 1;
    int middle;
    while (low <= high) {
        middle = (low + high) / 2;
        if (key == array[middle]) {
            cout << "Number found at index " << middle << "." << endl;
            return;
        }
        else if (key < array[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    cout << "Number not found." << endl;
}