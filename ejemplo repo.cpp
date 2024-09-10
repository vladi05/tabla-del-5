#include <iostream>
using namespace std;

int main () {
int numero;
    cout << "ingrese un numero: ";
    cin >> numero;
    if ( numero <= 0){
        cout << "ingrese un numero mayor a 0";

    } else {
    for (int i = 1; i <= 10; i++){

    cout << "el numero " << " x " << i << " = " << numero * i << endl;

}
    }





return 0;
}
