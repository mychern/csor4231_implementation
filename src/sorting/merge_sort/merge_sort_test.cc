#include "merge_sort.cc"

int main() {
    vector<int> test_1{1, 2, 3, 4};
    vector<int> test_2{4, 3, 2, 1};
    vector<int> test_3{-4, 1, -2, -5, 3, 2, 1, 5, 2};

    vector<int> res_1 = mergeSort<int>(test_1);
    vector<int> res_2 = mergeSort<int>(test_2);
    vector<int> res_3 = mergeSort<int>(test_3);

    printVector<int>(res_1);
    printVector<int>(res_2);
    printVector<int>(res_3);

    return 1;
}