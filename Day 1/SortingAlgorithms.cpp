void bubbleSort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

void selectionSort(int array[], int size) {
    int smallest;
    int temp;
    for (int i = 0; i < size; i++) {
        smallest = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[smallest])
                smallest = j;
        temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }
}

void insertionSort(int array[], int size) {
    int temp;
    for (int i = 1; i < size; i++) {
        temp = array[i];
        for (int j = i; j > 0 && temp < array[j - 1]; j--) {
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
}