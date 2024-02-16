#include <iostream>
using namespace std;

int main() {
    int numero = 42;
    int* ptrNumero = &numero; // Declaración de un apuntador y asignación de la dirección de 'numero'

    cout << "Valor de 'numero': " << numero << endl;
    cout << "Dirección de 'numero': " << &numero << endl;
    cout << "Valor de 'ptrNumero' (dirección): " << ptrNumero << endl;
    cout << "Valor al que apunta 'ptrNumero': " << *ptrNumero << endl;

    // Modificando el valor al que apunta el apuntador
    *ptrNumero = 100;

    cout << "\nDespués de modificar el valor a través del apuntador:" << endl;
    cout << "Valor de 'numero': " << numero << endl;
    cout << "Valor al que apunta 'ptrNumero': " << *ptrNumero << endl;

    return 0;
}
