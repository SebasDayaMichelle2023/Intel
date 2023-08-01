#include <iostream> 
using namespace std;

// Funci�n para verificar si un n�mero es primo
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

    cout << "Digite tres n�meros: ";
    cin >> numero1 >> numero2 >> numero3;

    if (esPrimo(numero1) && esPrimo(numero2) && esPrimo(numero3)) {
        int suma = numero1 + numero2 + numero3;
        if (suma % 2 != 0) {
            cout << "La suma de los tres n�meros primos es impar (Conjetura d�bil de n�meros primos)." << endl;
        } else {
            cout << "La suma de los tres n�meros primos es par." << endl;
        }
    } else {
        cout << "Al menos uno de los n�meros no es primo, por lo tanto, no cumple la conjetura." << endl;
    }

    return 0;
}

