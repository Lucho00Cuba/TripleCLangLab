#include <iostream>

using namespace std;

int main(){

    int number = 1;
    cout << "Number: " << number << endl;
    cout << "Number: " << ++number << endl;

    const int NUMBER = 1;
    cout << "Number: " << NUMBER << endl;
    // NUMBER = 3; // error

    return 0;
}