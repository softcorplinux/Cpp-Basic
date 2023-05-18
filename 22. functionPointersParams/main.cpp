/**
 * Created by Victor Isaikin
 */

#include <iostream>

using namespace std;

double changeIt(double *ptr);

int main() {
    double d {4.0};
//    double *p {&d};
    double result {changeIt(&d)};

    cout << "Inside main (d) = " << d << endl;
    cout << "Result = " << result << endl;
    return 0;
}

double changeIt(double *ptr){
    *ptr += 10;
    cout << "Inside changeIt = " << *ptr << endl;
    return *ptr;
}