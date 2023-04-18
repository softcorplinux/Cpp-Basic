/**
 * Created by Victor Isaikin
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 2;
    int b = 4;

    cout << "true = " << true << endl;
    cout << "false = " << false << endl;

    cout << "-------------------" << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << "-------------------" << endl;
    cout << (true == 1) << endl;
//    cout << ("Victor" == 1) << endl;

    cout << "-------------------" << endl;
    char ch1 = 'a'; // 97
    char ch2 = 'b'; // 98
    cout << (ch1 > ch2) << endl;

    cout << "-------------------" << endl;
    string s1 = "b"; // 98
    string s2 = "a"; // 97
//    cout << (s1 > s2) << endl;
    cout << (s1.compare(s2) == 0) << endl; // 98 - 97 = 1

    return 0;
}
