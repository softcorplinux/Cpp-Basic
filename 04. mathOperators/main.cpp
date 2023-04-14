/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
    cout << 2 + 2 << endl;
    cout << 2 - 2 << endl;
    cout << 2 / 2 << endl;
    cout << 2 * 2 << endl;

    cout << "-------%--------" << endl;
    cout << 5 % 2 << endl; // 5 - 2 = 3 - 2 = 1
    cout << 8 % 3 << endl; // 8 - 3 = 5 - 3 = 2
    cout << 8 % 4 << endl;

    cout << "-------+--------" << endl;
    cout << "Victor"s + " Isaikin" + ": 40 year old" << endl;

    cout << "-------=--------" << endl;
    int age = 40;
    cout << age << endl;

    int a, b, c;
    a = b = c = 2 + 2;
    cout << a << "," << b << ","<< c << endl;

    cout << "----------------" << endl;
    int n = 2;
//    n = n * 5;
//    n *= 5;
//    n = n + 5;
    n += 5;

    cout << n << endl;

    cout << "-------++-------" << endl;
    int counter = 2;
    counter++;
    cout << counter << endl;

    cout << "-------(++)-------" << endl;
    int counter2 = 1;
    int d = ++counter2;
    cout << counter2 << endl;
    cout << d << endl;

    return 0;
}
