/* Emmanuel Isidahomen
UMES
3 / 26 / 2018
Campus Bookshop Program
________________________
Two months before the beginning of each semester, the Campus Bookshop produces a
Purchase Requirements Report.This report details the books that have to be
purchased for the coming semester.In the past this was done manually but now
management have decided to computerise the operation.
Accordingly, lecturers' requirements have been captured and the results used to update
a Purchase Requirements File.This is a permanent file that contains details of the
lecturers' book requirements for both semesters.
You are required to write a program to produce a Purchase Requirements Report from
the Publisher, Book and Purchase Requirements files.The report should be sequenced
on ascending Publisher Name and should only detail the purchase requirements for the
semester under scrutiny.The semester number(1 or 2) should be accepted from the
user at the start of the program using a simple ACCEPT and DISPLAY.
*/

#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

ifstream inpubrchase;
ifstream inBooks;
ifstream inpublisher;

struct Bookshop

{
	string name;
	string pubrchase;
	string BookTITLE;
	string publishername;
	string lecturername;
	string QTY;
	int pages;
};


int main()

{

	inpubrchase.open("IN-PUB.DAT");
	inBooks.open("IN-PREQ.DAT");
	inpublisher.open("IN-BOOK.DAT");

	//check for errors 
	if (!inpubrchase)

	{
		cout << "error opening file" << endl;
		exit(1);
	}

	if (!inBooks)

	{
		cout << "error opening file " << endl;
		exit(1);
	}

	if (!inpublisher)

	{

		cout << " error opening file " << endl;
		exit(1);
	}

	else

		// Get the numbers 


    cout << " \t\t\tPURCHASE  REQUIREMENTS  REPORT\t\t\t\ " << endl;
	cout << " PAGE :  1\t\t" << "--------------------------------\t\t\t" << endl;

	cout << " PUBLISHER NAME\t\t\t\t\ BOOK TITLE \t\t\t\t  QTY " << endl;
	cout << " LECTURER NAME\t " << endl;





	system("PAUSE");
	return 0;

}
