/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
    double temperature;
    double total;
    char c;

    do {
        cout << "Enter a temperature: ";
        cin >> temperature;
        total += temperature;

        if(total < 100){
            cout << "Do you want to enter another? (y/n): ";
            cin >> c;
        }
    } while (tolower(c) == 'y' && total < 100);

    cout << "The total is " << total << endl;

    return 0;
}
