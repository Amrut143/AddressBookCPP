#include <iostream>
#include <vector>
#include "PersonDetails.cpp"
using namespace std;

class AddressBook {

	vector<Person> personList;

	public:
	void addPerson(Person person) {

		personList.push_back(person);
	}

	void editPerson() {

		bool flag = false;
		string firstName, lastName;
		vector<Person>::iterator person;

		cout << "Enter first name of person you want to edit: ";
		cin >> firstName;
		cout << "Enter last name of person you want to edit: ";
		cin >> lastName;

		for(person = personList.begin(); person != personList.end(); person++) {
			if(person -> getFirstName() == firstName && person -> getLastName() == lastName) {
				flag = true;

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
		}

		if(flag != true)
			cout << "No record found" << endl;
	}

	void deletePersonDetails() {

		bool flag = false;
		string firstName, lastName;
		vector<Person> :: iterator person;

		cout << "\nEnter first name : ";
		cin >> firstName;
		cout << "Enter last name : ";
		cin >> lastName;

		for(person = personList.begin();  person != personList.end(); person++){
			if(person -> getFirstName() == firstName && person -> getLastName() == lastName){
				flag = true;

				personList.erase(person);
				cout << "Person successfully deleted from addressbook" << endl;
				break;
			}
		}

		if (flag != 1)
			cout << "No record found" << endl;
	}

	void displayDetails() {

		for(Person person : personList) {

			person.display();
		}
	}
};
