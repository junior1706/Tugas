#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	cout << "          Daftar Belanjaan\n ";
	cout << "     |====|==============|=========|\n";
	cout << setw(11) << "| NO " << setw(10) << "|     Item     |"
		<< setw(9) << " Quantity|" << endl;
	cout << "      |====|==============|=========|\n";
	cout << setw(11) << "| 01 " << setw(10) << "|   Liefboys   |"
		<< setw(10) << "   3    |" << endl;
	cout << setw(11) << "| 02 " << setw(10) << "|   SusuBasi   |"
		<< setw(10) << "   10    |" << endl;
	cout << setw(11) << "| 03 " << setw(9) << "|   Kenangan   |"
		<< setw(10) << "   50    |" << endl;
	cout << "      |====|==============|=========|\n";

	system("pause");

	return 0;
}