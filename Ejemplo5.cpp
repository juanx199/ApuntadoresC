#include <iostream>
#include <string>

struct Alumno {
    std::string nombre;
    int nota[3];
};

int main() {
    Alumno estudiante;
    estudiante.nombre = "Juan";
    estudiante.nota[0] = 85;
    estudiante.nota[1] = 90;
    estudiante.nota[2] = 78;

    Alumno* ptrEstudiante = &estudiante; // Apuntador a la estructura

    std::cout << "Datos del estudiante:" << std::endl;
    std::cout << "Nombre: " << ptrEstudiante->nombre << std::endl;
    std::cout << "Notas: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << ptrEstudiante->nota[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
