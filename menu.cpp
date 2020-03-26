#include<iostream>
#include<string>

using namespace std;


int main() {
	int option = 0;


	do {

		cout << "Main Menu:" << endl << endl << endl;

		cout << "	select login:" << endl << endl;

		cout << "	1)Election Commission login" << endl << endl;

		cout << "	2)Political Party login" << endl << endl;

		cout << "	3)Voter login " << endl << endl;

		cout << "	4)Exit" << endl << endl;


		cout << "option: "; cin >> option; 

		system("CLS");

		switch (option)	{
		case 1: // Election Commission
			break;

		case 2:// Political Party
			break;

		case 3:// Voter login 
			break;

		case 4:// Exit program
			break;

		default:// Invalid option
			cout << "INVALID OPTION!!" << endl;
			break;
		}
	} while (option != 4);

	return 0;
}

