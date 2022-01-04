#include <iostream>//for input and output stream and the C++ will understand it
#include <cmath>// to do the calculations
#include <string>// for the variables firstname and lastname
#include <iomanip> // for the setprecision to round the decimials
using namespace std;
int main()
{
	char input;
	do
	{
		const double onepiece = 13.524, pi = 3.14159;//constant number
		double slice, diameter, area;// use double for these variables for calculating at decimials
		string firstname, lastname;
		cout << "This program will help you cut the pizza easier." << endl;//this is only an output statement
		cout << "Please type in your first name: ";//customer will put in their first name
		cin >> firstname;
		cout << "Please type in your last name: ";// customer will put in their last name
		cin >> lastname;
		cout << "Please type in your diameter here: ";// customer will now have to enter the diameter of that pizza
		cin >> diameter;
		while (!cin || diameter < 0)
		{
			cout << "Please re-enter your diameter: " << endl;
			cin.clear();
			cin.ignore(20, '\n');
			cin >> diameter;
		}
		area = pow(diameter / 2, 2.0) * pi;//calculating the area of the pizza
		slice = area / onepiece;// using that area to divided the size of 1 piece to get the slices
		cout << "HI " << firstname << " " << lastname << endl;
		cout << "Your pizza have an area of: " << area << " inches" << " And could be divided into: "  << slice << "slice" << endl;//this will print everything out for the customer and help the customer cut the slice easier
		cout << "It is approximately " << setfill('*') << setw(5) << "" << static_cast<int>(slice) << setfill('*') << setw(5) << "" << " slices" << endl;
		cout << "\n\n Do you want to continue using this program? Y or N \n\n";//this is for the people who want to reuse this program
		cin >> input;
	} while (input == 'Y' || input == 'y');
	return 0;
}
