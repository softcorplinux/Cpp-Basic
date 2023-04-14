/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int age = 40;

int main() {
    int age = 55;

    {
        int age = 33;
        cout << age << endl;
    }

    cout << age << endl;
    cout << ::age << endl;

//    int userIndex;

//    int l;
//    l = 100;
//    100 = l;

    return 0;
}
