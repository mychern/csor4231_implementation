#include "print_vector_util.cc"

int main() {
    vector<int> arr{1, 2, 3, 4};
    cout << "Each element of the following should have its own line:"<<endl;
    printVector<int>(arr);
    cout << "The following should be printed in same line and new line at the end:"<<endl;
    printVectorSameLine<int>(arr);
    cout << "The following should be printed with inequality relation:"<<endl;
    printVectorSorted<int>(arr);

    return 1;
}