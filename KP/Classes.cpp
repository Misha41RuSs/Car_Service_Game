#pragma once
#include "Classes.h"

Car::Car(string n, double c, double r, double g, double s) : name{ n }, cost{ c }, rentPerHour{ r }, gasTankCapacity{ g }, maxSpeed{ s }
{  }

int Car::Rent(Car, int) {
	return 0;
}

int Car::Go(Car, int) {
	return 0;
}
