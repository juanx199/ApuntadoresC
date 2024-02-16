/*
 Estudiate: Juan Camilo Carvajal
 Código: 20232020026
 Fecha: 15/02/2024
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct Alumno {
    string nombre;
    float nota[3];
    int cod;
    float prom;
};

int main() {
	int resp =1;
	int n;
	
	while (resp==1){
		setlocale(LC_ALL,"");
		cout << "Ingrese la cantidad de alumnos que desea ingresar ";
		cin >> n;
		Alumno alumnos[n];
		for (int i = 0; i < n; i++) {
			Alumno nuevo;
			int sumaNotas =0;
			system("cls");
			cout << "Ingrese su nombre: ";
			cin >> nuevo.nombre;
			for (int j = 0; j<3; ++j){
				cout << "Ingrese sus notas ["<<j<<"]: ";
				cin >>nuevo.nota[j];
				sumaNotas += nuevo.nota[j];
				cout << sumaNotas;
			} 
			nuevo.prom= sumaNotas/3;
			cout << "Ingrese su código: ";
			cin >> nuevo.cod;
			
			alumnos[i] =nuevo; 
		}
		Alumno* ptrAlumno = alumnos; // Apuntador a la estructura
		cout << "\n\t\t\t\t\t***DATOS DE LOS ESTUDIANTES***\n"; 
        cout << left << setw(30) << "\tNombre" << setw(30) << "\t   Notas" << setw(30) << "\t Promedio"<<setw(15) << "Código" << setw(15) << endl;
        for (int i = 0; i < n; i++) {//Este for recorre las 3 pers en el arreglo y muestra los resultados en la tabla
            cout << left << setw(30) << (ptrAlumno + i)->nombre + " ";
            for (int j =0; j<3;++j){
            	cout << setw(15) << (ptrAlumno + i)->nota[j];
			}
			cout << setw(15) << (ptrAlumno + i)->prom;
			cout << setw(15)<< (ptrAlumno + i)->cod<<endl;
        }
        cout << "¿Quieres volver a iniciar?\n Presiona 1 para si\n Presiona 0 para no\n "; //Preguntamos si desea repetir proceso
        cin >> resp;
        
	}
	cout << "Espero haber sido de ayuda :)";
    return 0;
}
