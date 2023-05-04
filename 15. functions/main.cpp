/**
 * Created by Victor Isaikin
 */

#include <iostream>

using namespace std;

int getNumber();
void print();

int main() {
    int number = getNumber();
    cout << number << endl;
    print();
    return 0;
}

int getNumber(){
    return 200;
}

void print(){
    cout << "Hello from Print" << endl;
}
