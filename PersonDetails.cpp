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
	Person(string firstName, string lastName, string address, string city, string state, string zipCode, string phoneNumber) {

		this -> firstName = firstName;
		this -> lastName = lastName;
		this -> address = address;
		this -> city = city;
		this -> state = state;
		this -> zipCode = zipCode;
		this -> phoneNumber = phoneNumber;
	}

	void display() {

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
