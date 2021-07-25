/* Emmanuel Isidahomen
UMES
3 / 26 / 2018
Campus Bookshop Program
________________________

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
