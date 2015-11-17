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
	while (head->next != 0)
	{
		head = head->next;
	}
	newCar = head->next;

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
	head = new photoCar;
	head->next = 0;
	head->address = "C:\\Users\\sinphi000\\Documents\\Visual Studio 2015\\Projects\\PhotoViewer\\PhotoViewer\\New folder\\DriverCPP1.png";
}