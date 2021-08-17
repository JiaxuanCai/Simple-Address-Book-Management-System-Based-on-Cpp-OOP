/*
 * Book.cpp
 *
 *  Created on: 2019年4月18日
 *      Author: CJX
 */
#include"Book.h"

Book::Book(vector<Person> pBook,string queryMode,string queryInf){
	this->pBook = pBook;
    this->queryMode= queryMode;
	this->queryInf = queryInf;
    this->rBook=getMembers();
};//constructor

vector<Person> Book::getMembers() {                        //getting results
    if (queryMode == "1") {
        queryName();                                            //first ray=name
    }
    if (queryMode == "2") {                                        //2 ray=gender
        queryGender();
    }
    if (queryMode == "3") {
        queryNumber();                                             //3 ray=number
    }
    return rBook;
}

void Book::queryName() {                                //Name
	rBook.clear();
	for(Person pBook:pBook){
		Person temp = pBook;
        if (temp.getName().compare(queryInf) == 0) {
            rBook.push_back(pBook);
        }
    }
}

void Book::queryGender() {                            //Gender
	rBook.clear();
	for(Person pBook:pBook){
		Person temp = pBook;
        if (temp.getGender().compare(queryInf) == 0){
            rBook.push_back(pBook);
        	}
        }
//	cout<<"这个函数调用结束了"<<endl;
    }

void Book::queryNumber() {                               //Telephone
	rBook.clear();
	for(Person pBook:pBook){
		Person temp = pBook;
        if (temp.getNumber().compare(queryInf) == 0) {
            rBook.push_back(pBook);
        }
    }
}

ostream& operator<<(ostream& output, const Book& book){

    vector<Person> t=book.rBook;
    ofstream fout("result.txt");          //go into the file
    while(t.size()!=0){
            fout<<t.back().getName()<<" "<<t.back().getGender()<<" "<<t.back().getNumber()<<endl;
            output<<t.back().getName()<<" "<<t.back().getGender()<<" "<<t.back().getNumber()<<endl;
            t.pop_back( );
        }

    fout.close();
    return output;
}

/*istream& operator>>(istream& input, Book& book) {
    vector<Person>t = book.pBook;
    ofstream fout("record.txt");          //from the file
    fout <<t.size()<< endl;
    while (t.size() != 0) {
            fout << t.back().getName() << " " <<  t.back().getGender() << " "
                    <<  t.back().getNumber() << endl;
             t.pop_back();
        }

    fout.close();

    return input;
}*/
