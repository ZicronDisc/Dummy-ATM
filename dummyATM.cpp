#include <iostream>
#include <string>

using namespace std;

int main()
{
	char Bank_in = ' ';

	string User;
	string Pass;
	string User1;
	string Pass1;

	int input = 0;
	int input2 = 0;
	int account = 0;

	char Option = ' ';

	cout << "Welcome to J&D Bank!" << endl;
	do {
		cout << "[L] Log-in" << endl;
		cout << "[C] Create an account" << endl;
		cout << "[E] Exit" << endl;
		cout << '\n';
		cout << "Please enter the letter of your choice: ";
		cin >> Bank_in;
		cout << '\n';
		cout << "----------------------------------" << endl;
		cout << '\n';

		switch (Bank_in)
		{
		case 'L':
		case 'l':
			cout << "Username: ";
			cin >> User;
			cout << "Passcode: ";
			cin >> Pass;
			cout << endl;
			if ((User == User1) && (Pass == Pass1)) {
				cout << "***Access Approved! Welcome!***" << endl;
				cout << "\n";
				cout << "----------------------------------" << endl;
				cout << "\n";
				cout << "How may I help you?" << endl;

				do {
					cout << "[D] Deposit" << endl;
					cout << "[W] Withdraw" << endl;
					cout << "[R] Request Balance" << endl;
					cout << "[E] Exit" << endl;
					cout << '\n';
					cout << "Please enter the letter of your choice: ";
					cin >> Option;
					cout << "\n";
					cout << "----------------------------------" << endl;
					cout << "\n";

					switch (Option) {
					case 'D':
					case 'd':
						cout << "How much? ";
						cin >> input;
						account = account + input;
						cout << "You have deposited " << input << endl;
						cout << "Current total amount: " << account << endl;
						cout << "\n";
						cout << "***Transaction Succesful***" << endl;
						cout << "\n";
						cout << "----------------------------------" << endl;
						cout << "\n";
						cout << "Would you like another transaction?" << endl;
						break;
					case 'W':
					case 'w':
						cout << "How much? ";
						cin >> input2;
						if (input2 > account) {
							cout << "***Insufficient balance***" << endl;
							cout << "\n";
							cout << "----------------------------------" << endl;
							cout << "\n";
							cout << "Would you like another transaction?" << endl;
						}
						else {
							account = account - input2;
							cout << "You have deposited " << input2 << endl;
							cout << "Current total amount: " << account << endl;
							cout << "\n";
							cout << "***Transaction Succesful***" << endl;
							cout << "\n";
							cout << "----------------------------------" << endl;
							cout << "\n";
							cout << "Would you like another transaction?" << endl;
						}
						break;
					case 'R':
					case 'r':
						account = account;
						cout << "Current total amount: " << account << endl;
						cout << "\n";
						cout << "***Transaction Succesful***" << endl;
						cout << "\n";
						cout << "----------------------------------" << endl;
						cout << "\n";
						cout << "Would you like another transaction?" << endl;
						break;
					}

				} while ((Option != 'E') && (Option != 'e'));

			}
			else {
				cout << "***Access Denied! Try Again!***" << endl;
				cout << "\n";
				cout << "----------------------------------" << endl;
				cout << "\n";
			}
			break;
		case 'C':
		case 'c':
			cout << "Username: ";
			cin >> User1;
			cout << "Passcode: ";
			cin >> Pass1;
			cout << endl;
			cout << "***Account created! Welcome!***" << endl;
			cout << "\n";
			cout << "----------------------------------" << endl;
			cout << "\n";
			break;
		}

	} while ((Bank_in != 'E') && (Bank_in != 'e') && (Option != 'E') && (Option != 'e'));
	cout << "Thank you for banking with us, Stay safe!" << endl;

	return 0;
}
