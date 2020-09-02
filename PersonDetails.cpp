#include <iostream>
using namespace std;

class Person {

	string firstName;
	string lastName;
	string address;
	string city;
	string state;
	string zipCode;
	string phoneNumber;

	public:
	Person() {}

	Person(string firstName, string lastName) {

		this -> firstName = firstName;
		this -> lastName = lastName;
	}

	string getFirstName() {

		return firstName;
	}

	string getLastName() {

		return lastName;
	}

	void setAddress(string address) {

		this -> address = address;
	}

	string getAddress() {

		return address;
	}

	void setCity(string city) {

		this -> city = city;
	}

	string getCity() {

		return city;
	}

	void setState(string state) {

		this -> state = state;
	}

	string getState() {

		return state;
	}

	void setZipCode(string zipCode) {

		this -> zipCode = zipCode;
	}

	string getZipCode() {

		return zipCode;
	}

	void setPhoneNumber(string phoneNumber) {

		this -> phoneNumber = phoneNumber;
	}

	string getPhoneNumber() {

		return phoneNumber;
	}

	void display() {

		cout << "********************" << endl;
		cout << "ADDRESS BOOK DETAILS" << endl;
		cout << "*********************" << endl;
		cout << "NAME: " << this -> firstName << " " << this -> lastName
				<< "\nADDRESS: " << this -> address
				<< "\nCITY: " << this -> city
				<< "\nSTATE: " << this -> state
				<< "\nZIPCODE: " << this -> zipCode
				<< "\nPHONENUMBER: " << this -> phoneNumber << endl;
   }

};
