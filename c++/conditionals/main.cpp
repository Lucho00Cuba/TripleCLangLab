#include <iostream>

using namespace std;

int main(){
    // control statements with if-else
    int x;
    int y;
    cout << "Enter two integers separated by a space: ";
    cin >> x >> y;
    if(x > y){
        cout << x << " is greater than " << y << endl;
    } else if (y > x) {
        cout << y << " is greater than " << x << endl;
    } else {
        cout << x << " is are equal to " << y << endl;
    }

    // control statements with switch
    cout << "Enter the operation [ '+' or '-' or '*' or '/' ]: ";
    char op;
    cin >> op;

    switch(op){
        case '+':
            cout << x << " + " << y << " = " << x + y << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << x - y << endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << x * y << endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << x / y << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    return 0;
}