#include "slice_util.cc"
#include "print_vector_util.cc"

int main() {
    vector<int> test{-4, 1, -2, -5, 3, 2, 1, 5, 2};
    vector<int> res = slice<int>(test, 2, 5);

    printVector<int>(res);

    return 1;
}