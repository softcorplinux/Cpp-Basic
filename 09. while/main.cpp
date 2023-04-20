/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
    unsigned int index = 0U;
    unsigned long long finish;
    cout << "Enter the number:" << endl;
    cin >> finish;

    while (index++ < finish){
        cout << "Book " << index << endl;
    }

    return 0;
}
