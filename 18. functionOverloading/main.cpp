/**
 * Created by Victor Isaikin
 */
 
#include <iostream>
#include <string>

using namespace std;

int func(int x, int y);
int func(int x, int y = 100);
double func(const double x = 50, const double y = 100);
string func(string x, string y);

int main() {
    cout << "Int = " << func(3, 5) << endl;
    cout << "Double = " << func(4.5, 6.7) << endl;
    cout << "String = " << func("Victor", "Isaikin") << endl;
    return 0;
}

int func(int x, int y){
    return x + y;
}

double func(const double x, const double y){
    return x + y;
}

string func(string x, string y){
    return x + " " + y;
}