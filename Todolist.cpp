// 3.  Todo list Primera iteración.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Add.h"
#include "Menu.h"
#include <vector>


int main()
{
	std::string tarea;


	std::cout << "\t\tCeti Colomos";
	std::cout << "\t\tHector Mauricio Rodriguez Salazar 21310416";
	std::cout << "\t\tGrupo 2P T/M";
	std::cout << "\n\t\tBienvenido, este es un Todo list"<<std::endl;

		
	Menu a(tarea);
	a.carta();

	std::cout << "\n" << std::endl;
	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
