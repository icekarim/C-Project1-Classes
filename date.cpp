#include "stdafx.h"
#include "date.h"
#include <string> 
#include <iostream>
using namespace std;
date::date() {
	setYear(1970);
	setMonth("jan");
	setDay(1);
}
date::date(int day, string month, int year) {
	setYear(year);
	setMonth(month);
	setDay(day);
}

int date::getYear() {
	return year;
}
void date::setYear(int newYear) {
	if (newYear >= 1970 && newYear <= 2099) {
		this->year = newYear;
	}
	else {
		cout << "Incorrect Input is between: 1970 <= year <= 2099 ";
	}
}
int date::getDay() {
	return day;
}
void date::setDay(int newDay) {
	if (newDay>= 1 && newDay <= 31) {
		this->day = newDay;
	}
	else {
		cout << "Incorrect Input is between: 1 <= day <= 31 " << endl;
	}
}
string date::getMonth() {
	return month;
}
void date::setMonth(string newMonth) {
	this->month = newMonth;
}
void date::toString() {
	cout << "DATE:" << day << " " << month << " " << year << endl;
}
void date::printDate(int format) {
	string temp;
	temp = month;
	temp[0] = toupper(temp[0]);
	switch (format) {
	case 0:
		cout << temp << " " << day << ","
			<< " " << year << endl;
		break;
	case 1:
		cout << day << " " << temp
		<< " " << year << endl;
		break;
	case 2:
		cout << getMonthNumber() << "-" << day
			<< "-" << year << endl;
		break;
	case 3: 
		cout << getMonthNumber() << "/" << day
			<< "/" << year << endl;
		break;
	default:
		cout << "invalid input ";
	}
}
int date::getMonthNumber() {
	int number = 0;
	string monthName[] = { "jan", "feb", "mar",
		"apr", "may", "Jun", "jul",
		"au", "sep", "oct",
		"nov", "dec" };
	int num = sizeof(monthName);
	while (monthName[number] != month && number < num) {
		number++;
	}
	return number + 1;
	}




