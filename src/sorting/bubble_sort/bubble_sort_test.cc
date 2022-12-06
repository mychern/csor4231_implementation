#include "bubble_sort.cc"

int main() {
    vector<int> test_1{1, 2, 3, 4};
    vector<int> test_2{4, 3, 2, 1};
    vector<int> test_3{-4, 1, -2, -5, 3, 2, 1, 5, 2};
    vector<int> test_4{4, 7, -1, 9, 9, -6, 1, 3};

    bubbleSort<int>(test_1);
    bubbleSort<int>(test_2);
    bubbleSort<int>(test_3);
    bubbleSort<int>(test_4);

    cout<<"First result:"<<endl;
    printVectorSorted<int>(test_1);
    cout<<"Second result:"<<endl;
    printVectorSorted<int>(test_2);
    cout<<"Third result:"<<endl;
    printVectorSorted<int>(test_3);
    cout<<"Fourth result:"<<endl;
    printVectorSorted<int>(test_4);

    /*
    Output (copied from terminal):
    First result:
    1 <= 2 <= 3 <= 4
    Second result:
    1 <= 2 <= 3 <= 4
    Third result:
    -5 <= -4 <= -2 <= 1 <= 1 <= 2 <= 2 <= 3 <= 5
    Fourth result:
    -6 <= -1 <= 1 <= 3 <= 4 <= 7 <= 9 <= 9
    */

    return 1;
}