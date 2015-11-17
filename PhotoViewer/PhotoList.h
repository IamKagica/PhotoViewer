#pragma once

#include <iostream>
#include <string>

struct photoCar 
{
	std::string address;
	photoCar *next;
	photoCar *prev;
};

class PhotoList
{
private:
	photoCar *head;
	photoCar *tail;

public:
	PhotoList();
	~PhotoList();
	void start();
	void removePhoto(int); //Removes element at given pos
	void addPhoto(std::string); // Adds to the end of the list
	void changePhoto(int, std::string); //Inserts the value at the given index
	double get(int pos); //Returns element at that pos
	void set(int pos, double value); // Sets a position in the list
	int size(); // The number of elements stored in the list
	// NextPhoto and PrevPhoto?
};

