#include "../../util/print_vector_util.cc"
#include "../../util/slice_util.cc"

using std::cout;
using std::vector;
using std::endl;

template <typename T>
vector<T> merge(vector<T>& A, vector<T>& B);

template <typename T>
void mergeSort(vector<T>& arr, int p, int r);