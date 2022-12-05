#include "selection_sort.cc"

int main() {
    vector<int> test_1{1, 2, 3, 4};
    vector<int> test_2{4, 3, 2, 1};
    vector<int> test_3{-4, 1, -2, -5, 3, 2, 1, 5, 2};
    vector<int> test_4{4, 7, -1, 9, 9, -6, 1, 3};

    selectionSort<int>(test_1);
    selectionSort<int>(test_2);
    selectionSort<int>(test_3);
    selectionSort<int>(test_4);

    cout<<"First result:"<<endl;
    printVector<int>(test_1);
    cout<<"Second result:"<<endl;
    printVector<int>(test_2);
    cout<<"Third result:"<<endl;
    printVector<int>(test_3);
    cout<<"Fourth result:"<<endl;
    printVector<int>(test_4);

    return 1;
}