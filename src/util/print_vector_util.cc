#include "print_vector_util.h"

template <typename T>
void printVector(vector<T> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}