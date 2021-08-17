#include "Person.h"


Person::Person(string sName, string sGender, string iNumber){//constructor
	this->sName=sName;
	this->sGender=sGender;
	this->sNumber=iNumber;
}

string Person::getName()const//get and set
{
	return sName;
}

string Person::getGender()const
{
	return sGender;
}

string Person::getNumber()const
{
	return sNumber;
}

void Person::setName(string sName){
	this->sName=sName;
}

void Person::setGender(string sGender){
	this->sGender=sGender;
}

void Person::setNumber(string iNumber){
	this->sNumber=sNumber;
}
