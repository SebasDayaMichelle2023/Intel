#include <iostream> 
using namespace std;

bool esPrimo(int numero) {
    // Casos especificos
    if (numero <= 1) return false;
    if (numero <= 3) return true;

    // Verificacion de divisibilidad por 2 y 3
    if (numero % 2 == 0 || numero % 3 == 0) return false;

    // Comprobar la division por los números restantes
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }

    // Si no se pudo dividir por ninguno de los de arriba, es primo
    return true;
}

int main() {
    int numero;
    cout << "Escribe un numero y te dira si es primo:\n";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "Es primo" << endl;
    } else {
        cout << "NO es primo" << endl;
    }

    return 0;
}

