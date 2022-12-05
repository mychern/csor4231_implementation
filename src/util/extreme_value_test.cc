#include "extreme_value.cc"

int main() {
    vector<int> test_1{1, 2, 3, 4};
    vector<int> test_2{4, 3, 2, 1};
    vector<int> test_3{2, 1, 4, 3};

    int max_1 = vectorMaxVal(test_1);
    int max_2 = vectorMaxVal(test_2);
    int max_3 = vectorMaxVal(test_3);

    int min_1 = vectorMinVal(test_1);
    int min_2 = vectorMinVal(test_2);
    int min_3 = vectorMinVal(test_3);

    cout<<"For test 1, the min is "<<min_1<<"; the max is "<<max_1<<endl;
    cout<<"For test 2, the min is "<<min_2<<"; the max is "<<max_2<<endl;
    cout<<"For test 3, the min is "<<min_3<<"; the max is "<<max_3<<endl;

    return 1;
}