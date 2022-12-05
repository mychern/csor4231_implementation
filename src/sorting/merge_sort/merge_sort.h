#include <iostream>
#include <vector>
#include "../../util/slice_util.cc"

using std::cout;
using std::vector;
using std::endl;

template <typename T>
vector<T> merge(vector<T> arr1, vector<T> arr2);

template <typename T>
vector<T> mergeSort(vector<T> arr);