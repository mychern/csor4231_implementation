#include "concat_arr.h"

template <typename T>
vector<T> concatArr(vector<T>& arr1, vector<T>& arr2){
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
}