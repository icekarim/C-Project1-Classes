#pragma once
#include <string> 
using namespace std;
class date
{
private:
	int year;     // member variable 
	int day;     // member variable 
	string month;     // member variable

public:
	date(int , string , int );
	date();
	int getYear();                        
	void setYear(int);       
	int getDay();                       
	void setDay(int);       
	string getMonth();
	void printDate(int);
	int getMonthNumber();
	void setMonth(string);   
	void toString();


}; 


