/**
 * Created by Victor Isaikin
 */
#include <iostream>
#include "string"

using namespace std;

int main() {
    int array[4] {};

    for(int index {}; index < 4; index++){
        array[index] = (index + 1) * 100;
    }

    for (int index {}; index < 4; index++) {
        cout << "Index " << array[index] << endl;
    }

    return 0;
}
