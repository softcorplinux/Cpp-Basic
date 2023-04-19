/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
    int age = 40;
    auto age2 = age;

    const int NUMBER = 1000;
    cout << NUMBER << endl;

    constexpr int AGE = 30;
    cout << AGE << endl;

    return 0;
}
