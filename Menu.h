#pragma once
#include "Add.h"
#include <iostream>
#include <stdlib.h>

class Menu : public Add
{

	public:
		Menu(){}
		~Menu(){}

		Menu(std::string _homework) : Add(_homework) {}

		void carta()
		{
			int option = 0;
			ptrPila p = NULL;
			std::string dato;
			std::string  x;

			while (option != 4)
			{
				std::cout << "\n\n\tTodo List" << std::endl;
				std::cout << "\tUsted debera escoger una de las siguientes opciones\n" << std::endl;
				std::cout << "1.Agregar un Actividad a realizar" << std::endl;
				std::cout << "2.Eliminar una de las actividades" << std::endl;
				std::cout << "3.Mostrar tareas pendientes" << std::endl;
				std::cout << "4. Salir" << std::endl;
				std::cin >> option;

				//Add a("hola");


				switch (option)
				{


				case 1:
					std::cout << "\t\t\n\nEscriba la tarea" << std::endl;
					std::cin >> dato;
					Insertar(p, dato);
					std::cout << " Tarea  " << dato << " Agregada\n\n" << std::endl;
					break;
				case 2:
					x = Borrar(p);
					std::cout << "\t\t\n\nTarea  " << x << "  eliminado\n\n" << std::endl;
					break;
				case 3:
					std::cout << "\t\t\n\nListado de pila\n\n" << std::endl;
					if (p != NULL)
						Listar_pila(p);
					else
						std::cout << "\n\nNo hay elementos" << std::endl;
					break;

				case 4:
					std::cout << "\t\t\n\nVuelva pronto" << std::endl;
					break;

				default: std::cout << "\t\t\n\nEscribio un numero erroneo" << std::endl;
				}
			}
		}
		





};

