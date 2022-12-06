#include "concat_arr.cc"

int main() {
    vector<int> A{1, 2, 3};
    vector<int> B{4, 5, 6};

    printVector(concatArr(A, B));

    return 1;
}