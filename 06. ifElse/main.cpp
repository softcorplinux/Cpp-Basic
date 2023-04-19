/**
 * Created by Victor Isaikin
 */
#include <iostream>

using namespace std;

int main() {
    int sum = 2000;

    if(sum >= 10000 || sum == 3000){
        cout << "I will buy a book" << endl;
    } else if(sum == 2001){
        cout << "I will buy a lot of books" << endl;
    } else if((sum == 2000 && sum == 3000) || sum < 1000){
        cout << "I will buy a 100 books" << endl;
    } else {
        cout << "I will not buy a books" << endl;
    }

    cout << (sum == 200 || sum < 3000 ? "I have 2000" : "I dont have a money" ) << endl;

    return 0;
}
