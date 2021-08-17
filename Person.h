/*
 * Person.h
 *
 *  Created on: 2019Äê4ÔÂ17ÈÕ
 *      Author: CJX
 */

#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
#include<string>
#include <vector>

using namespace std;

class Person{
private:
	string sName;
	string sGender;
	string sNumber;

public:
	Person(){
	};
	Person(string sName, string sGender, string iNumber);//constructor
	string getName()const;//get and set functions
	string getGender()const;
	string getNumber()const;
	void setName(string sName);
	void setGender(string sGender);
	void setNumber(string iNumber);

};
#endif /* PERSON_H_ */
