#include <iostream> 
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero1, numero2, numero3;

    cout << "Digite tres números: ";
    cin >> numero1 >> numero2 >> numero3;

    if (esPrimo(numero1) && esPrimo(numero2) && esPrimo(numero3)) {
        int suma = numero1 + numero2 + numero3;
        if (suma % 2 != 0) {
            cout << "La suma de los tres números primos es impar (Conjetura débil de números primos)." << endl;
        } else {
            cout << "La suma de los tres números primos es par." << endl;
        }
    } else {
        cout << "Al menos uno de los números no es primo, por lo tanto, no cumple la conjetura." << endl;
    }

    return 0;
}

