/**
 * Created by Victor Isaikin
 */
#include <iostream>
#include "string"

using namespace std;

int main() {
    cout << "Menu\n"
        << "1. Cake\n"
        << "2. Eggs\n"
        << "3. Tomatoes\n"
        << "4. Pasta" << endl;
    cout << "Select the number: ";
    int menu;
    cin >> menu;

    switch (menu) { // 3
        case 1:
            cout << "Selected Cake\n";
            [[fallthrough]];
        case 2:
        case 3:
            cout << "Selected Tomatoes\n";
            break;
        case 4:
            cout << "Selected Pasta\n";
            break;
        default:
            cout << "You are not selected menu\n";
            break;
    }


    return 0;
}
