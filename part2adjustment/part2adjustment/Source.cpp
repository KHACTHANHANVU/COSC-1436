#include <iostream>// input output stream to prevent code everything again
#include <cmath>// get resources from cmath library
#include <string>// get resources from string library
#include <iomanip>// get resources from iomanip library
using namespace std;
int main()
{
	char choice, input;
	// this is the menu
	do
	{
		string firstname, lastname;
		cout << "Please type in your first name: ";//customer will put in their first name
		cin >> firstname;
		cout << "Please type in your last name: ";// customer will put in their last name
		cin >> lastname;
		while (!cin) // for customer put in wrong input, they need to rewrite it
		{
			cout << "Your name should be written by letters: " << endl;
			cin.clear();
			cin.ignore(20, '\n');
			cout << "Please rewrite in your first name: ";//customer will put in their first name
			cin >> firstname;
			cout << "Please rewrite in your last name: ";// customer will put in their last name
			cin >> lastname;
		}
		cout << "Hi " << firstname << " " << lastname << endl;
		cout << "This program will have 3 functions to choose" << endl;
		cout << "A: Determine if your birthyear is an odd or even\n";
		cout << "B: Calculating the tax of your item\n";
		cout << "C: converting celcius to fahrenheit\n";
		cout << "D: Quit this program\n";
		cin >> choice;


		switch (choice)
		{
		case 'a':// This is to calculate the birthyear odd or even
		case 'A':
		{
			int age, birthyear, thisyear;
			cout << "What year is this: ";
			cin >> thisyear;
			cout << "Please type in your age: ";
			cin >> age;
			while (!cin || age < 0) // for customer put in wrong input, they need to rewrite it
			{
				cout << "Your age should not be letters or positive number: " << endl;
				cin.clear();
				cin.ignore(20, '\n');
				cin >> age;
			}
			birthyear = thisyear - age;
			if (birthyear % 2 == 0)
				cout << "your birth year is " << birthyear << " and it is an even number";
			else
				cout << "your birth year is " << birthyear << " and it is an odd number";
		}
		break;
		case 'b':// This is to calculating the tax of the customer's item
		case 'B':
		{
			double price, taxrate, total;
			cout << "Please type in the price of the item: ";
			cin >> price;
			cout << "Please type in the tax rate ";
			cin >> taxrate;
			while (!cin || price < 0 || taxrate < 0)
			{
				cout << "Your price or tax rate should not be letters or positive number: " << endl;
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Please type in the price of the item: ";
				cin >> price;
				cout << "Please type in the tax rate ";
				cin >> taxrate;
			}
			total = price + price * (taxrate / 100);
			cout << "The final price of your item is " << total << " $" << endl;
		}
		break;
		case 'c':// This will convert celcius to farenheit
		case 'C':
		{
			float celcius, faranheit; // using float to prevent c26451 error.
			cout << "Please type in your celcius degree: ";
			cin >> celcius;
			while (!cin)
			{
				cout << "Your celcius degree should not be letters: " << endl;
				cin.clear();
				cin.ignore(20, '\n');
				cout << "Please type in your celcius degree: ";
				cin >> celcius;
			}
			faranheit = static_cast<int>(1.8 * celcius) + 32;
			cout << "Your faranheit temperature is: " << faranheit << "F" << endl;
		}
		break;
		case 'd':// customer will use this to quit the program
		case 'D':
			cout << "You are quiting this program" << endl;
			return 0;
			break;
		default: cout << "You have entered an invalid choice" << endl;//this is for people who enter a wrong character that does not match the program
		}
		cout << "\n\n Do you want to continue using this program? Y or N \n\n";//this is for the people who want to reuse this program
		cin >> input;
	} while (input == 'Y' || input == 'y');
	return 0;
}