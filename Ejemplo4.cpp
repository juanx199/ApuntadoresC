#include <iostream>

int main() {
    const int tamano = 5;
    int numeros[tamano] = {10, 20, 30, 40, 50}; // Declaración de un arreglo

    // Usando un apuntador para acceder a los elementos del arreglo
    int* ptrNumeros = numeros; // El nombre del arreglo es un apuntador implícito al primer elemento

    std::cout << "Acceso a elementos del arreglo usando apuntador:" << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Elemento " << i << ": " << *(ptrNumeros + i) << std::endl;
    }

    // Modificando elementos del arreglo a través del apuntador
    *(ptrNumeros + 2) = 99; // Modifica el tercer elemento del arreglo

    std::cout << "\nDespués de modificar el arreglo:" << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}
