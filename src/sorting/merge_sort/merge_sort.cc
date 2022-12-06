#include "merge_sort.h"

template <typename T>
void merge(vector<T>& arr, int p, int q, int r) {
    // Initialize.
    // Note that the partition is arr[p,q] and arr[q+1,r].
    int n1 = q-p+1, n2 = r-q, n = r-p+1;
    int i=0, j=0;
    vector<int> L(n1);
    vector<int> U(n2);

    for (int i=0; i<n1; i++) {
        L[i]=arr[p+i];
    }
    for (int i=0; i<n2; i++) {
        U[i]=arr[q+i+1];
    }

    // Iterate.
    for (int k = 0; k < n; k++) {
        if (i < n1 && (j >= n2 || L[i] < U[j])) {
            arr[p+k] = L[i];
            i++;
        } else {
            arr[p+k] = U[j];
            j++;
        }
    }
}

template <typename T>
void mergeSort(vector<T>& arr, int p, int r) {
    if (p < r) {
        int mid = p + (r-p)/2;
        // Recursive calls.
        mergeSort<T>(arr, p, mid);
        mergeSort<T>(arr, mid+1, r);

        // Merge to sort.
        merge(arr, p, mid, r);
    }
}