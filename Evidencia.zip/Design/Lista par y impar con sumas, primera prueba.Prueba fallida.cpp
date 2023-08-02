#include <iostream> 

using namespace std;

int main() {

    int limite_fuerte = 22222222;
  
    int suma_fuerte = 0;


    // Conjetura fuerte
    cout << "Los numeros pares del 2 al " << limite_fuerte << " son: " << endl;
    for (int i = 2; i <= limite_fuerte; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
            suma_fuerte += i;
        }
    }

  

    cout << "La suma de los numeros pares de la conjetura fuerte es: " << suma_fuerte << endl;
    
    
    cout << "Presione ENTER para salir..." << endl;
    cin.get();
    return 0;
}

