#include "print_vector_util.cc"

template <typename T>
T vectorMaxVal(vector<T> arr) {
    int size = arr.size();
    T max = arr[0];
    for (int i=1; i<size; i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
T vectorMinVal(vector<T> arr) {
    int size = arr.size();
    T min = arr[0];
    for (int i=1; i<size; i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}