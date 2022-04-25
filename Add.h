#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Add
{
private:
	std::string homework;
	class Add *next;

public:

	Add(){}
	Add(std::string _homework)
	{
		homework = _homework;
	}
	~Add(){}

    typedef Add *ptrPila;

    
    //Insertar elemento en la pila
    void Insertar(ptrPila &p, std::string write)
    {
        ptrPila aux;
        aux = new (class Add); //Apuntando al  nuevo nodo
        aux->homework = write;
        aux->next = p;
        p = aux;
    }

    //Borrar elemento en la pila
    
    std::string Borrar(ptrPila &p)
    {
        std::string homework;
        ptrPila aux;

        aux = p;
        homework = aux->homework;

        p = aux->next;
        delete(aux);

        return homework;
    }

    void Listar_pila(ptrPila p)
    {
        ptrPila aux;
        aux = p;

        while(aux != NULL)
        {
            std::cout << "\t" << aux->homework << endl;
            aux = aux->next;
        }

    }
    
    
    









	/*
	Add(){}
	void Set_work(std::string);
	void Set_next(Add*);
	std::string Get_work();
	Add* Get_next();



	Add(std::string _homework)
	{
		homework = _homework;
	}
	*/


	/*

	void insert()
	{

		int number;
		std::vector <string> vector1;

		std::cout << "Cuantas tareas deseas realizar?" << std::endl;
		std::cin >> number;


		for (int j = 0; j < number; j++)
		{
			int num{};
			std::cout << "Escribe las tarea" << std::endl;
			std::cin >> num;
			vector1.push_back(num);
		}

		for (auto i = vector1.begin(); i != vector1.end(); i++) {
			std::cout << *i << std::endl;
		}


	}
	*/
};