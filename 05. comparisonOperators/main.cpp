/**
 * Created by Victor Isaikin
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 1;
    int b = 3;

    cout << true << endl;
    cout << false << endl;

    cout << "----------------" << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << "----------------" << endl;
//    cout << ("Victor" == 1) << endl;

    cout << "----------------" << endl;
    string s1 = "Victor";
    string s2 = "Isaikin";
//    cout << (s1 == s2) << endl;
    cout << (s1.compare(s2) == 0) << endl;

    cout << "----------------" << endl;
    char ch1 = 'a'; // 97
    char ch2 = 'b'; // 98

    cout << (ch1 < ch2) << endl;

    return 0;
}
