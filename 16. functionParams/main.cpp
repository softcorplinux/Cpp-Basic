/**
 * Created by Victor Isaikin
 */

#include <iostream>
#include <cmath>

using namespace std;

double power(double x, double y);

int main() {
    cout << power(8, -3) << endl;
    cout << std::pow(8, -3) << endl;
    return 0;
}

double power(double x, double y){
    double result {1.0};
    int index {};

    if(y >= 0){
        while (++index <= y){
            result *= x; // result = result * x;
        }
    }else{
        while (++index <= -y){
            result /= x;
        }
    }

    return result;
}