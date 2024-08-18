#include <iostream>
#include "SearchingAlgorithms.cpp"
#include "SortingAlgorithms.cpp"

using namespace std;

void sorting(int[], int);
void searching(int[], int);

int main() {
    cout << "Input the number of integers you want to enter: ";
    int size;
    cin >> size;
    int numbers[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    cout << "Here are the numbers you have entered: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";
    cout << endl;

label1:
    cout << "What would you like to do?" << endl
         << "1) Sort the numbers" << endl
         << "2) Search for a number" << endl
         << "Choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            sorting(numbers, size);
            break;
        case 2:
            searching(numbers, size);
            break;
        default:
            cout << "Wrong choice number. Please try again." << endl;
            goto label1;
    }
    
    return 0;
}

void sorting(int numbers[], int size) {
label2:
    int sortingAlgorithmChoice;
    cout << "Which algorithm would you like to use for sorting?" << endl
         << "1) Bubble sort" << endl
         << "2) Selection sort" << endl
         << "3) Insertion sort" << endl
         << "Choice: ";
    cin >> sortingAlgorithmChoice;

    switch(sortingAlgorithmChoice) {
        case 1:
            cout << "You have selected bubble sort." << endl
                << "The sorted list is as follows: " << endl;
            bubbleSort(numbers, size);
            for (int i = 0; i < size; i++)
                cout << numbers[i] << " ";
            break;
        case 2:
            cout << "You have selected selection sort." << endl
                << "The sorted list is as follows: " << endl;
            selectionSort(numbers, size);
            for (int i = 0; i < size; i++)
                cout << numbers[i] << " ";
            break;
        case 3:
            cout << "You have selected insertion sort." << endl
                << "The sorted list is as follows: " << endl;
            insertionSort(numbers, size);
            for (int i = 0; i < size; i++)
                cout << numbers[i] << " ";
            break;
        default:
            cout << "Wrong choice number. Please try again." << endl;
            goto label2;
    }
}

void searching(int numbers[], int size) {
    int searchingAlgorithmChoice;
    int numberToBeSearched;
    cout << "Enter the number you would you like to search for: ";
    cin >> numberToBeSearched;
label3:
    cout << "Which algorithm would you like to use for searching?" << endl
         << "1) Linear search" << endl
         << "2) Binary search" << endl
         << "Choice: ";
    cin >> searchingAlgorithmChoice;

    switch(searchingAlgorithmChoice) {
        case 1:
            cout << "You have selected linear search." << endl
                << "And the result is: ";
            linearSearch(numbers, size, numberToBeSearched);
            break;
        case 2:
            cout << "You have selected binary search." << endl
                << "And the result is: ";
            binarySearch(numbers, size, numberToBeSearched);
            break;
        default:
            cout << "Wrong choice number. Please try again." << endl;
            goto label3;
    }
}