#include "selection_sort.h"

template <typename T>
void selectionSort(vector<T> & arr) {
    const int size = arr.size();
    for (int i=0; i<size; i++) {
        int min = i;
        for (int j=i+1; j<size; j++) {
            if (arr[j]<arr[min]) {
                min = j;
            }
        }
        T temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}