#include <iostream>
#include "PersonDetails.cpp"
using namespace std;

class AddressBook {

	Person person;

	public:
	void addPerson(Person person) {

		this -> person = person;
	}

	void displayDetails() {

		person.display();
	}
};
