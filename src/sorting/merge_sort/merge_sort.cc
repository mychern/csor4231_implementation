#include "merge_sort.h"

template <typename T>
vector<T> merge(vector<T> arr1, vector<T> arr2) {
    // Initialize.
    int i = 1;
    int j = 1;
    int n = arr1.size() + arr2.size();
    vector<T> res;

    // Iterate.
    for (int k = 0; k < n; k++) {
        if (arr1[i] < arr2[j]) {
            res[k] = arr1[i];
            i++;
        } else {
            res[k] = arr2[j];
            j++;
        }
    }

    return res;
}

template <typename T>
vector<T> mergeSort(vector<T> arr) {
    // Initialize.
    int mid = arr.size()/2;

    // Base case.
    if (arr.size() <= 1) {
        return arr;
    }

    // Inductive cases.
    return merge<int>(mergeSort<int>(slice()),
                      mergeSort<int>(arr, mid+1, j));
}