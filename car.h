#pragma once
class car
{
private:
	int speed;
	double gas;
	bool engine;
public:
	car();
	car(int , double, bool);
	void setEngineState(bool);
	void setSpeed(int);
	void setGas(double);
	double getGas();
	double getSpeed();
	bool getEngineState();
	void toString();

};

