// C++ Calculator Version 1
// Isaac J. De La Vina | 08/24/2023 | Time Created: 6:32 PM


#include <iostream>;
# include <string>;
# include <chrono>;
# include <thread>;
# include <Windows.h>
using namespace std;

void clearConsole() {
	system("cls");
}

void easterEgg() {
	clearConsole();
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(500));
	clearConsole();
	cout << "..";
	this_thread::sleep_for(chrono::milliseconds(900));
	clearConsole();
	cout << "...";
	this_thread::sleep_for(chrono::milliseconds(930));
	clearConsole();
	cout << "Alright smart ass, I want you write one of the operators so you can get this over with";
	this_thread::sleep_for(chrono::milliseconds(1000));
	clearConsole();
	cout << "yeah.";
	this_thread::sleep_for(chrono::milliseconds(1000));
	clearConsole();
	cout << "Chip idiot...";
}	


void calculation(float operand_1, float operand_2) {
	string sign;
	cout << "Type your operators + , - , / , *: ";
	cin >> sign;
	

	
	if (sign == "+") {
		// NOTE: Repeated code, needed to use a function to make this cleaner.
		clearConsole();
		cout << "Answer is "<< operand_1 + operand_2 << endl;
	}
	else if (sign == "-") {
		clearConsole();
		cout << "Answer is " << operand_1 - operand_2 << endl;
	}
	else if (sign == "/") {
		clearConsole();
		cout << "Answer is " <<  operand_1 / operand_2 << endl;
	}
	else if (sign == "*") {
		clearConsole();
		cout << "Answer is " << operand_1 * operand_2 << endl;
	}
	else if (sign == "venus") {
		easterEgg();
	}


}

int main()
{
	float num_1 = 0, num_2 = 0;
	string answer;
	bool program_run = true;


	while (program_run)
	{
		cout << "Give me your first number: ";
		cin >> num_1;
		cout << "Give me your second number: ";
		cin >> num_2;
		
		calculation(num_1, num_2);

		
		cout << "\nPress \"Y\" to Recalculate." << endl;
		cout << "Press anything to exit program." << endl;
		cin >> answer;

		if (answer == "y" || answer == "Y") {
			program_run = true;
			clearConsole();
		}
		else if (answer != "y" || answer != "Y"){
			clearConsole();
			cout << "Exiting program";
			program_run = false;
		}

	}
	

	



	// A statement that provide users an option to enter a new calculation or not.
	// Error handler to prevent characters that are not mathmatical operators.
	// More cleaner code.

}


