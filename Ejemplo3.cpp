#include <iostream>

// Función que modifica el valor a través de un apuntador (paso por referencia)
void modificarPorReferencia(int* ptr) {
    *ptr = 10;
}

// Función que modifica una copia del valor (paso por valor)
void modificarPorValor(int valor) {
    valor = 20;
}

int main() {
    int numero = 5;

    std::cout << "Valor original de 'numero': " << numero << std::endl;

    modificarPorValor(numero); // Paso por valor
    std::cout << "Después de modificar por valor: " << numero << std::endl;

    modificarPorReferencia(&numero); // Paso por referencia (apuntador)
    std::cout << "Después de modificar por referencia: " << numero << std::endl;

    return 0;
}
