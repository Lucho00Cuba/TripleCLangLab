#include <iostream>

using namespace std;

void Greeting(string name){
    std::cout << "-- start Greeting --" << endl;
    std::cout << "Hello " << name << "!" << endl;
    std::cout << "-- end Greeting --" << endl;
} 

void HelloWorld(){
    std::cout << "-- start HelloWorld --" << endl;
    std::cout << "Hello World!" << endl;
    Greeting("Lucho");
    std::cout << "-- end HelloWorld --" << endl;
}

double half(double n1, double n2){
    std::cout << "-- start half --" << endl;
    double result = (n1 + n2) / 2;
    std::cout << "The half of " << n1 << " and " << n2 << " is " << result << endl;
    std::cout << "-- end half --" << endl;
    return result;
}

int main(){
    std::cout << "-- start main --" << endl;
    HelloWorld();
    half(4, 2);
    std::cout << "-- end main --" << endl;
    return 0;
}