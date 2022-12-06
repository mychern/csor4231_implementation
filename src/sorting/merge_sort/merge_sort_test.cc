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
    printVectorSameLine<int>(test_1);
    
    // Test for mergeSort(arr, p, r) function.
    mergeSort<int>(test_1, 0, test_1.size()-1);
    mergeSort<int>(test_2, 0, test_2.size()-1);
    mergeSort<int>(test_3, 0, test_3.size()-1);
    mergeSort<char>(test_4, 0, test_4.size()-1);

    cout<<"First test result:"<<endl;
    printVectorSorted<int>(test_1);
    cout<<"Second test result:"<<endl;
    printVectorSorted<int>(test_2);
    cout<<"Third test result:"<<endl;
    printVectorSorted<int>(test_3);
    cout<<"Fourth test for another data type (char):"<<endl;
    printVectorSorted<char>(test_4);

    /*
    Output (copied from terminal):
    Merge function output test result:
    1 2 3 4 5 6
    First test result:
    1 <= 2 <= 3 <= 4 <= 5 <= 6
    Second test result:
    1 <= 2 <= 3 <= 4
    Third test result:
    -5 <= -4 <= -2 <= 1 <= 1 <= 2 <= 2 <= 3 <= 5
    Fourth test for another data type (char):
    a <= b <= c <= d <= j <= z
    */

    return 1;
}