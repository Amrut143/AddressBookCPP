#include <iostream>
#include "AddressBookService.cpp"
using namespace std;

void displayWelcomeMsg() {

	cout << "Welcome To My AddressBook" << endl;
}

void addPersonToAddressBook(AddressBook &addressBook) {

	string firstName, lastName, address, city, state, zipCode, phoneNumber;

	cout << "Enter person's first name" << endl;
	cin >> firstName;

	cout << "Enter person's last name" << endl;
	cin >> lastName;

	cout << "Enter person's address" << endl;
	cin >> address;

	cout << "Enter person's city" << endl;
	cin >> city;

	cout << "Enter person's state" << endl;
	cin >> state;

	cout << "Enter person's zipcode" << endl;
	cin >> zipCode;

	cout << "Enter person's phonenumber" << endl;
	cin >> phoneNumber;

	Person person(firstName, lastName, address, city, state, zipCode, phoneNumber);

	addressBook.addPerson(person);
}

void selectOptionForOperation() {

	AddressBook addressBook;
	bool flag = true;
	int option;

	while(flag) {

		cout << "Enter your option \n1.Add Person \n2.View Details \n3.Exit" << endl;
		cin >> option;

		switch(option) {

			case 1:
				addPersonToAddressBook(addressBook);
				break;

			case 2:
				addressBook.displayDetails();
				break;

			case 3:
				flag = false;
		}
	}
}

int main() {

	displayWelcomeMsg();
	selectOptionForOperation();
}
