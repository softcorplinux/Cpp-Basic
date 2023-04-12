/**
 * Created by Victor Isaikin
 */
#include "iostream"
#include "limits.h"

using namespace std;

int main() {
    short s = -100;
    unsigned short s2 = 300;
    cout << s << endl;
    cout << s2 << endl;

    int i = -5000000;
    unsigned int i2 = 5000000;
    cout << i << endl;
    cout << i2 << endl;

    long l = 700000000000000;
    unsigned  long l2 = 900000000000;
    cout << l << endl;
    cout << l2 << endl;

    cout << "-----------------" << endl;

    bool b = 6 > 5;
    cout << b << endl;

    cout << "-----------------" << endl;

    float f = 3.14f;
    cout << f << endl;

    double d = 4455.445;
    cout << d << endl;

    cout << "-----------------" << endl;

    char c = 'a';
    cout << c << endl;
    cout << CHAR_MAX << endl;
    cout << INT_MAX << endl;
    cout << sizeof(int) << endl;



    return 0;
}
