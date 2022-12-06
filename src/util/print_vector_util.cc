#include "print_vector_util.h"

template <typename T>
void printVector(vector<T> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}

template <typename T>
void printVectorSameLine(vector<T> arr) {
    for (int i = 0; i < arr.size()-1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[arr.size()-1] << endl;
}

template <typename T>
void printVectorSorted(vector<T> arr) {
    for (int i = 0; i < arr.size()-1; i++) {
        cout << arr[i] << " <= ";
    }
    cout << arr[arr.size()-1] << endl;
}