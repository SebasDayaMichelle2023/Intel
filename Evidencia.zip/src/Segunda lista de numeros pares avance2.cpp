#include <iostream> 
using namespace std;

int main() {
    cout << "Los numeros pares del 2 al 22222222 son: " << endl;

    for (int i = 2; i <= 22222222; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    cout << "Presione ENTER para salir..." << endl;
    cin.get();
    return 0;
}

