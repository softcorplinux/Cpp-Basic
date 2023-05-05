/**
 * Created by Victor Isaikin
 */

#include <iostream>

using namespace std;

double power(double x, double y);

int main() {
    cout << power(8, -2) << endl;
    /*
     *  power -> power -> power -> power <- power <- power <- power <- power
     */
    return 0;
}

double power(double x, double y){
    if(y == 0) return 1.0;
    else if(y > 0) return x * power(x, y - 1);
    else return 1.0 / power(x, -y);
}