//============================================================================
// Name        : Address.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Person.h"
#include "Book.h"
int main() {
    vector<Person> pBook;                  //members

    string name,gender,number,queryMode,queryInf; //decleration
    int count=0;

    ifstream inRecord("record.txt");       //record.txt
    ifstream inQuery("query.txt");         //query information

    cout<<"pBook如下"<<endl;
    for(string s;getline(inRecord,s);){
        if(count==0){
            count++;
        }
        else {
            cout << s << endl;                                               //output
            istringstream isRecord(s);
            isRecord >> name >> gender >> number;
            Person person(name,gender,number);
            pBook.push_back(person);                                         //get the pBook
        }
    }

    /*cout<<"pBook如下"<<endl;
    for(Person pBook:pBook){               //see the pBook
    	cout<<pBook.getName()<<" "<<pBook.getGender()<<" "<<pBook.getNumber()<<endl;
        }
	*/

    for (string s; getline(inQuery, s);) {

        istringstream isQuery(s);
        isQuery>> queryMode >> queryInf;                                        //get query information
    }
    cout<<"Query information"<<queryMode<<queryInf<<endl;

    Book book(pBook,queryMode,queryInf);
    vector<Person> resultBook;             //Query
    resultBook=book.getMembers();                                    //get query results
    cout<<"results"<<endl;
        for(Person resultBook:resultBook){               //see ruslut book
        	cout<<resultBook.getName()<<" "<<resultBook.getGender()<<" "<<resultBook.getNumber()<<endl;
            }


    ofstream fout("result.txt");          //go into the file

    for(Person resultBook:resultBook){
      Person temp=resultBook;
      fout<<temp.getName()<<" "<<temp.getGender()<<" "<<temp.getNumber()<<endl;
    }
    cout<<"go into the file successfully"<<endl;
    fout.close();
    return 0;
}
