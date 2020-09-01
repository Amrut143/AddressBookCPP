#include <iostream>
#include "AddressBookService.cpp"
using namespace std;

void displayWelcomeMsg() {

	cout << "Welcome To My AddressBook" << endl;
}

void addPersonToAddressBook(AddressBook &addressBook) {

	string firstName, lastName, address, city, state, zipCode, phoneNumber;
	bool duplicateEntry = false;

	cout << "Enter person's first name" << endl;
	cin >> firstName;

	cout << "Enter person's last name" << endl;
	cin >> lastName;
	duplicateEntry = addressBook.isPersonPresent(firstName, lastName);

	if(duplicateEntry == true) {
		cout << "Person already exist" << endl;
		return;
	}

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

		cout << "Enter your option \n1.Add Person \n2.View Details \n3.Edit Person \n4.Delete Person "
				<<"\n5.Sort BY \n6.SearchByCityAndState \n7.Exit" << endl;
		cin >> option;

		switch(option) {

			case 1:
				addPersonToAddressBook(addressBook);
				break;

			case 2:
				addressBook.displayDetails();
				break;

			case 3:
				addressBook.editPerson();
				break;

			case 4:
				addressBook.deletePersonDetails();
				break;

			case 5:
				addressBook.sortBy();
				break;

			case 6:
				addressBook.searchByCityAndState();
				break;

			case 7:
				flag = false;
		}
	}
}

int main() {

	displayWelcomeMsg();
	selectOptionForOperation();
}
