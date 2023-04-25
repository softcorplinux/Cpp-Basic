/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
    int index = 0;

    while (index++ < 4){
        cout << "Index " << index << endl;
        int innerIndex = 0;

        while (innerIndex++ < 4){
            if(innerIndex == 3){
//                break;
                goto loop_exit;
            }
            cout << "-- Inner Index " << innerIndex << endl;
        }
    }

    loop_exit:
    cout << "I am here" << endl;


//    int index = 0;
//
//    while (index++ < 4){
//        if(index % 2 == 0){
//            continue;
//        }
//        cout << "Index " << index << endl;
//    }

    return 0;
}
