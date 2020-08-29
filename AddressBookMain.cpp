#include <iostream>
#include "PersonDetails.cpp"
using namespace std;

int main() {

	cout << "Welcome To My AddressBook" << endl;

	Person person("Amrut", "Panda", "SilkBoard", "Blr", "KA", "456787", "7897657890");
	person.display();
}
