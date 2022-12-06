#include "merge_sort.cc"

int main() {
    // Test variables:
    vector<int> test_1{1, 3, 5, 2, 4, 6};
    vector<int> test_2{4, 3, 2, 1};
    vector<int> test_3{-4, 1, -2, -5, 3, 2, 1, 5, 2};
    vector<char> test_4{'a', 'z', 'c', 'j', 'b', 'd'};

    // Tests for merge(arr, p, q, r) function.
    cout<<"Merge function output test result:"<<endl;
    merge<int>(test_1, 0, 2, 5);
    printVector<int>(test_1);
    
    // Test for mergeSort(arr, p, r) function.
    mergeSort<int>(test_1, 0, test_1.size()-1);
    mergeSort<int>(test_2, 0, test_2.size()-1);
    mergeSort<int>(test_3, 0, test_3.size()-1);
    mergeSort<char>(test_4, 0, test_4.size()-1);

    cout<<"First test result:"<<endl;
    printVector<int>(test_1);
    cout<<"Second test result:"<<endl;
    printVector<int>(test_2);
    cout<<"Third test result:"<<endl;
    printVector<int>(test_3);
    cout<<"Fourth test for another data type:"<<endl;
    printVector<char>(test_4);

    return 1;
}