#include "bubble_sort.h"

template <typename T>
void bubbleSort(vector<T> & arr) {
    for (int i=0; i<arr.size()-1; i++) {
        for (int j=0; j<arr.size()-1-i; j++) {
            if (arr[j]>arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}