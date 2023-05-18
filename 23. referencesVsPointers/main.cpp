/**
 * Created by Victor Isaikin
 */

#include <iostream>

using namespace std;

void byPointer(int *ptr);
void byReference(int &ref);
//void constPointer(const int *ptr);
//void constPointer(int* const ptr);
int constPointer(const int* const ptr);

int main() {
    int n {10};

//    byPointer(nullptr);
//    cout << "byPointer = " << n << endl;
//
//    byReference(n);
//    cout << "byReference = " << n << endl;

    constPointer(&n);
    cout << "constPointer = " << n << endl;

    return 0;
}

void byPointer(int *ptr){
    if(ptr != nullptr){
        *ptr += 10;
    }
}

void byReference(int &ref){
    ref += 13;
}

//void constPointer(const int *ptr){
////    *ptr += 10;
//    ptr = nullptr;
//}
//
//void constPointer(int* const ptr){
//    *ptr += 33;
////    ptr = nullptr;
//}

int constPointer(const int* const ptr){
//    *ptr += 10;
//    ptr = nullptr;
    return *ptr + 100;
}