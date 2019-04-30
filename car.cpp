
#include "stdafx.h"
#include <iostream>
#include "car.h"
using namespace std;
car::car() {
	setSpeed(95);
	setGas(87.5);
	setEngineState(true);
}
car::car(int speedAmount, double gasAmount, bool engineAmount) {
	setSpeed(speedAmount);
	setGas(gasAmount);
	setEngineState(engineAmount);
}
double car::getGas() {
	return gas;
}

bool car::getEngineState() {
	return engine;
}

double car::getSpeed() {
	return speed;
}
void car::setSpeed(int currentSpeed) {
	if (currentSpeed >= 0) {
		this->speed = currentSpeed;
	}
	else {
		cout << "Speed must be greater than or equal to 0";
	}
}
void car::setEngineState(bool state) {
	this->engine = state;
}
void car::setGas(double amount) {
	if (amount >= 0.0) {
		this->gas = amount;
	}
	else {
		cout << "Gas must be from 0 <= gas <= 100" <<endl;
	}
}
void car::toString() { 
	cout << "Gas: " << getGas() << " Speed: " << getSpeed() << " Engine State: " << getEngineState() << endl;
}