/**
 * Created by Victor Isaikin
 */

#include <iostream>

using namespace std;

unsigned short retirement(const unsigned short age, const unsigned short years = 65);

int main() {
    cout << "I will retire in " << retirement(40, 45) << " years" << endl;
    return 0;
}

unsigned short retirement(const unsigned short age, const unsigned short years){
    return years - age;
}