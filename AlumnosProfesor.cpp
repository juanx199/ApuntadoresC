#include <iostream>
#include <string>

struct Alumno {
    std::string nombre;
    int nota[3];
};

int main() {
    Alumno estudiantes[3]; // Arreglo de tres Alumnos

    // Llenar los datos de los estudiantes
    estudiantes[0].nombre = "Juan";
    estudiantes[0].nota[0] = 85;
    estudiantes[0].nota[1] = 90;
    estudiantes[0].nota[2] = 78;

    estudiantes[1].nombre = "María";
    estudiantes[1].nota[0] = 92;
    estudiantes[1].nota[1] = 88;
    estudiantes[1].nota[2] = 76;

    estudiantes[2].nombre = "Pedro";
    estudiantes[2].nota[0] = 78;
    estudiantes[2].nota[1] = 85;
    estudiantes[2].nota[2] = 92;

    // Apuntador a la estructura Alumno
    Alumno* ptrEstudiante = estudiantes;

    std::cout << "Datos de los estudiantes:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Estudiante " << i + 1 << ":" << std::endl;
        std::cout << "Nombre: " << (ptrEstudiante + i)->nombre << std::endl;
        std::cout << "Notas: ";
        for (int j = 0; j < 3; ++j) {
            std::cout << (ptrEstudiante + i)->nota[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
