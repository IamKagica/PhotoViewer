#include "PhotoList.h"
#include <iostream>
#include <string>
#include "MyForm.h"

//PhotoViewer
//Author: Phillip Sin
//Date: 11/13/15
//Class: CP2 C++ (A2)

/*struct photoCar
{
	std::string name;
	photoCar *next;
	photoCar *prev;
};*/

void PhotoList::addPhoto(std::string value)
{
	photoCar *newCar = new photoCar;
	newCar->address = value;
	if (head != 0)
	{
		while (head->next != 0)
		{
			head = head->next;
		}
		newCar = head->next;
		newCar->address = value;
	}
	else
	{
		newCar->address = value;
	}

}

void PhotoList::removePhoto(int pos)
{

}

void PhotoList::changePhoto(int pos, std::string value)
{

}

double PhotoList::get(int pos)
{

	return 0;
}

void PhotoList::start()
{

}