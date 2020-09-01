#include <iostream>
#include "PersonDetails.cpp"
using namespace std;

class AddressBook {

	Person* person;

	public:
	void addPerson(Person person) {

		this -> person = new Person(person);
	}

	void editPerson() {

		cout << "Enter address: " << endl;
		string address;
		cin >> address;
		person -> setAddress(address);

		cout << "Enter city: " << endl;
		string city;
		cin >> city;
		person -> setCity(city);

		cout << "Enter state: " << endl;
		string state;
		cin >> state;
		person -> setState(state);

		cout << "Enter phonenumber: " << endl;
		string phoneNumber;
		cin >> phoneNumber;
		person -> setPhoneNumber(phoneNumber);

		cout << "Enter zipcode: " << endl;
		string zipCode;
		cin >> zipCode;
		person -> setZipCode(zipCode);
	}

	void deletePersonDetails() {

		delete person;
		cout << "Person details are successfully deleted" << endl;
	}

	void displayDetails() {

		person -> display();
	}

};
