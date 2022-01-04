/* Send my greetings to the people who read this program
I'm Khac Thanh An Vu ID:7732712
This is project 2 of COSC 1436 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath> // preprocessor directive

using namespace std;

void menu(); // using void for menu because we don't need menu to return any value to us
double convert(double&, double&);
double degree(double&, double&);
double power(double&, double&);

const int evennumber = 2;
double number;
void oddoreven(int number, int evennumber)
{
	if (number % evennumber == 0)
		cout << "Your number: " << static_cast<int>(number) << " is even.";
	else
		cout << "Your number: " << static_cast<int>(number) << " is odd.";
}// this function will let the users know that the number they enter is odd or even

int main()
{
	int choice;
	char input;
	double usd, rate;
	double farenheit, kelvin;
	double x, y;
	string name;

	do
	{
		menu();
		cin >> choice;
		while (choice < 1 || choice > 6 || !cin) // let the users re-enter the right choice
		{
			cout << "Please re-enter your choice here:";
			cin.clear();
			cin.ignore(50, '\n');
			cin >> choice;
		}
		switch (choice) // switch statement to choose from 1 to 6
		{
		case 1:
			cout << fixed << showpoint << setprecision(2);
			cout << "Please enter the amount of usd and rate: ";
			cin >> usd >> rate;
			while (!cin || usd < 0)
			{
				cout << "Please re-enter the amount of usd and rate: ";
				cin.clear();
				cin.ignore(50, '\n');
				cin >> usd >> rate;
			}
			cout << "With " << usd << " USD" << " You have: " << convert(usd, rate) << " pesos";
			break;
		case 2: 
			cout << fixed << showpoint << setprecision(2);
			cout << "Please enter the farenheit degree you want to " << endl;
			cin >> farenheit;
			while (!cin)
			{
				cout << "Please re-enter your farenheit: ";
				cin.clear();
				cin.ignore(50, '\n');
				cin >> farenheit;
			}
			kelvin = (farenheit - 32) * 5 / 9 + 273.15;
			cout << "Your celcius degree is: " << degree(farenheit, kelvin) << " C" << " which is " << kelvin << "K";
			break;
		case 3: 
		{
			cout << "What is your full name, honey?";
			cin.clear();
			cin.ignore(50, '\n');
			getline(cin, name);
			int numberofletters = name.length();
			for (unsigned int i = 0; i < name.length(); i++)
				if (name.at(i) == ' ')
				{
					numberofletters--;
				}
			cout << "Number of letters: " << numberofletters;
		}
			break;
		case 4: 
			cout << "Please write x to the power of y:  ";
			cin >> x;
			while (!cin)
			{
				cout << "Please re-write x to the power of y:  ";
				cin.clear();
				cin.ignore(50, '\n');
				cin >> x;
			}
			cout << "Please write the exponential: ";
			cin >> y;
			while (!cin)
			{
				cout << "Please re-write the exponential: ";
				cin.clear();
				cin.ignore(50, '\n');
				cin >> y;
			}
			cout << "The answer is: " << power(x, y);
			break;
		case 5: 
			cout << "Please enter an integer: ";
			cin >> number;
			while (!cin)
			{
				cout << "Please re-enter your number:";
				cin.clear();
				cin.ignore(50, '\n');
				cin >> number;
			}
			oddoreven(number, evennumber);
			break;
		case 6:
			cout << "The program is quitting" << endl;
			return 0;
		default: cout << "You have entered an invalid choice" << endl;
		}
		cout << "\n\n" << setfill('$') << setw(237) << "" << "\n\n"; // the number 237 in the setw may be wierd but if you use my screen resolution when you use full screen it will be a line of symbol
		cout << "\n\n Do you want to continue using this program? Y or N \n\n";//this is for the people who want to continue using this program
		cin >> input;
	} while (input == 'Y' || input == 'y' || input == 'yes' || input == 'YES' || input == 'Yes');
	return 0;
}

void menu()
{
	cout << "\nThis program has multiple functions" << endl;
	cout << "1: Convert dollar to pesos" << endl;
	cout << "2: Convert fahrenheit to celsius and kelvin" << endl;
	cout << "3: Count the letters in users name" << endl;
	cout << "4: Raise X to the power Y" << endl;
	cout << "5: Finds if a number is even or odd" << endl;
	cout << "6: Quit this program :(((" << endl;
	cout << "Please enter your choice here: ";

}//this is the menu

double convert(double& usd, double& rate)
{
	return usd * rate;
} //this function is used to convert usd to persos

double degree(double& farenheit, double& kelvin)
{
	return (farenheit - 32)/1.8;
	
}// this function is used to convert farenheit to celcius

double power(double& x, double& y)
{
	return pow(x,y);
}//this function is used to raised x to the power of y