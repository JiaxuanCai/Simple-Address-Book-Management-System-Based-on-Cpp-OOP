/*
 * Book.h
 *
 *  Created on: 2019Äê4ÔÂ18ÈÕ
 *      Author: CJX
 */

#ifndef BOOK_H_
#define BOOK_H_
#include"Person.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class Book{
private:
	vector<Person> pBook;//members
	vector<Person> rBook;//results
	string queryMode;//mode
	string queryInf;//information


public:
	Book(vector<Person> pBook,string queryMode,string queryInf);//constructor
	vector<Person> getMembers();
    void queryName();
    void queryGender();
    void queryNumber();
    friend ostream& operator<<(ostream& output, const Book& Book) ;
    friend istream& operator>>(istream& input, Book& Book) ;
};

#endif /* BOOK_H_ */
