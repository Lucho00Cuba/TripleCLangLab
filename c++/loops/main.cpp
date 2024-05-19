#include <iostream>

using namespace std;

int main(){
    // loop with while
    std::cout << "-- start while --" << endl;
    int i = 0;
    while(i <= 10){
        cout << i << endl;
        i++;
    }
    cout << "-- end while --" << endl;

    // loop with do-while
    cout << "-- start do-while --" << endl;
    do{
        cout << i << endl;
        i++;
    } while(i <= 12);
    cout << "-- end do-while --" << endl;

    // loop with for
    cout << "-- start for --" << endl;
    for(int i = 0; i <= 10; i++){
        cout << i << endl;
    }
    cout << "-- end for --" << endl;

    // loop with for (array)
    cout << "-- start for (array) --" << endl;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    cout << "-- end for (array) --" << endl;

    // nested loops with an array of arrays
    cout << "-- start nested loops --" << endl;
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << array[i][j] << endl;
        }
    }
    cout << "-- end nested loops --" << endl;

    return 0;
}