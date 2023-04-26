/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
//    int array[2] {1,2};

//    cout << "Int = " << sizeof(int) << endl;
//    cout << "Size first element of array = " << sizeof(array[0]) << endl;
//    cout << "Array size = " << sizeof(array)/sizeof(array[0]) << endl;

    int a1[2][2] {{1,2}, {3,4}};

    for(size_t i {}; i < sizeof(a1)/sizeof(a1[0]); i++){
        cout << "Parent array index = " << i << endl;
        for(size_t j {}; j < sizeof(a1[i])/sizeof(a1[i][0]); j++){
            cout << "-- Children array value = " << a1[i][j] << endl;
        }
    }

    return 0;
}
