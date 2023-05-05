/**
 * Created by Victor Isaikin
 */

#include <iostream>

using namespace std;

int main() {
//    int number = 2;
//    cout << &number << endl;
//
//    int * p_number = &number;
//    cout << p_number << endl;
//    cout << *p_number << endl; // p_number = 0x7fff17e4a9cc = * = 2
//
//    *p_number = 100;
//    cout << number << endl;
//    cout << *p_number << endl;

    int arr[] {1,4,7};
    int * p_arr = arr;
    cout << p_arr << endl;
    cout << &arr[0] << endl;
    cout << *(p_arr + 1) << endl;
    cout << ++p_arr << endl;

    *(p_arr + 1) = 200;
    cout << *(p_arr + 1) << endl;

    return 0;
}
