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

	bool isPersonPresent(string firstName, string lastName) {

		vector<Person>::iterator person;

		for(person = personList.begin(); person != personList.end(); person++) {
			if(person -> getFirstName() == firstName && person -> getLastName() == lastName) {

				return true;
			}
		}
		return false;
	}

	void sortByName() {

		for(int i = 0; i < personList.size() - 1; i++) {
			for(int j = i + 1; j < personList.size(); j++) {
				if(personList[i].getFirstName() > personList[j].getFirstName()) {
					swap(personList[i], personList[j]);
				}
			}
		}
	}

	void sortByCity() {

		for(int i = 0; i < personList.size() - 1; i++) {
			for(int j = i + 1; j < personList.size(); j++) {
				if(personList[i].getCity() > personList[j].getCity()) {
					swap(personList[i], personList[j]);
				}
			}
		}
	}

	 void sortByState() {

		for(int i = 0; i < personList.size() - 1; i++) {
			for(int j = i + 1; j < personList.size(); j++) {
				if(personList[i].getState() > personList[j].getState()) {
					swap(personList[i], personList[j]);
				}
			}
		}
	}

	 void sortByZip() {

		for(int i = 0; i < personList.size() - 1; i++) {
			for(int j = i + 1; j < personList.size(); j++) {
				if(personList[i].getZipCode() > personList[j].getZipCode()) {
					swap(personList[i], personList[j]);
				}
			}
		}
	}

	void sortBy() {

		int option;

		cout << "Enter your option \n1.SortByName \n2.SortByCity \n3.SortByState \n4.SortByZip" << endl;
		cin >> option;

		switch(option) {

			case 1:
				sortByName();
				break;

			case 2:
				sortByCity();
				break;

			case 3:
				sortByState();
				break;

			case 4:
				sortByZip();
				break;

			default:
				cout << "Invalid input!!!!!!" << endl;
				break;
		}

		displayDetails();
	}

	void searchByCityAndState() {

		string city, state;

		cout << "Enter the city you want to search" << endl;
		cin >> city;
		cout << "Enter the state you want to search" << endl;
		cin >> state;

		if(personList.size() != 0) {
			for(Person person : personList) {
				if(city == person.getCity() && state == person.getState()) {

					person.display();
				}
			}
		}
		else {
			cout << "No record found" << endl;
		}
	}

	void searchByCityOrState() {

		string searchItem;

		cout << "Enter the city or state you want to search" << endl;
		cin >> searchItem;

		if(personList.size() != 0) {
			for(Person person : personList) {
				if(searchItem == person.getCity() || searchItem == person.getState()) {

					person.display();
				}
			}
		}
		else {
			cout << "No record found" << endl;
		}
	}
};
