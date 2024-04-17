#pragma once
#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Car {
private:
	string name;
	double cost;
	double rentPerHour;
	double gasTankCapacity;
	double maxSpeed;
public:
	string color;
	Car(string, double, double, double, double);
	int Rent(Car, int);
	int Go(Car, int);
};

#endif 