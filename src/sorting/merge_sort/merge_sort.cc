#include "merge_sort.h"

template <typename T>
vector<T> merge(vector<T> arr1, vector<T> arr2) {
    // Initialize.
    int i = 0;
    int j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<T> res;

    // Iterate.
    for (int k = 0; k < n1+n2; k++) {
        if (i < n1 && (j >= n2 || arr1[i] < arr2[j])) {
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
    int size = arr.size();
    int mid = (size + 1) / 2;

    // Base case.
    if (size <= 1) {
        return arr;
    }

    // Inductive cases.
    return merge<int>(mergeSort<int>(slice(arr, 1, mid)),
                      mergeSort<int>(slice(arr, mid+1, size-1)));
}