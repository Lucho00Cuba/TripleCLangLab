#include <iostream>

using namespace std;

int main(){

    int number = 5;
    double decimal = 10.5;
    char letter = 'a';

    std::cout << number << " => " << &number << endl;
    std::cout << decimal << " => " << &decimal << endl;
    std::cout << letter << " => " << static_cast<void*>(&letter) << endl;

    int *pnumber = &number;
    std::cout << *pnumber << " => " << pnumber << endl;
    char *pletter = &letter;
    std::cout << *pletter << " => " << static_cast<void*>(pletter) << endl;

    return 0;
}