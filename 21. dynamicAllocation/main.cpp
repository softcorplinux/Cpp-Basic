/**
 * Created by Victor Isaikin
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
//    double *p_value {new double {3.14}};
//    p_value = new double{3.14};
//    *p_value = 3.14;
//    delete p_value;
//    p_value = nullptr;
//    *p_value = 3.45;

//    double * p_data{new double []{5,7,8}};
//    cout << *(p_data + 2) << endl;
//
//    delete [] p_data;
//    p_data = nullptr;

    size_t max{};

    cout << "How many random number would you like? ";
    cin >> max;

    if(max == 0) return 0;

    auto * r {new unsigned[max]};

    for (size_t i {}; i < max; i++){
        *(r + i) = std::rand();
    }

    for (size_t i {}; i < max; i++){
        cout << *(r + i) << endl;
    }

    delete[] r;
    r = nullptr;

    return 0;
}
