//Chris Sun
//C++
//Person Customer Data using inheritance

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//*************************************************************
//**********************PersonData Class***********************
//*************************************************************

class PersonData {
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;
public:
	PersonData();
	~PersonData();
	PersonData(string, string, string, string, string, string, string);
	string getLastName();
	string getFirstName();
	string getAddress();
	string getCity();
	string getState();
	string getZip();
	string getPhone();
	void setLastName(string);
	void setFirstName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setPhone(string);
};

PersonData::PersonData() {
	firstName = "";
	lastName = "";
	address = "";
	city = "";
	state = "";
	zip = "";
	phone = "";
}

PersonData::~PersonData() {

}

PersonData::PersonData(string ln, string fn, string address, string city, string state, string zip, string phone) {
	lastName = ln;
	firstName = fn;
	this->address = address;
	this->city = city;
	this->state = state;
	this->zip = zip;
	this->phone = phone;
}

string PersonData::getLastName() {
	return lastName;
}

string PersonData::getFirstName() {
	return firstName;
}

string PersonData::getAddress() {
	return address;
}

string PersonData::getCity() {
	return city;
}

string PersonData::getState() {
	return state;
}

string PersonData::getZip() {
	return zip;
}

string PersonData::getPhone() {
	return phone;
}

void PersonData::setLastName(string last) {
	lastName = last;
}

void PersonData::setFirstName(string first) {
	firstName = first;
}

void PersonData::setAddress(string address) {
	this->address = address;
}

void PersonData::setCity(string city) {
	this->city = city;
}

void PersonData::setState(string state) {
	this->state = state;
}

void PersonData::setZip(string zip) {
	this->zip = zip;
}

void PersonData::setPhone(string phone) {
	this->phone = phone;
}

//*************************************************************
//******************End PersonData Class***********************
//*************************************************************


//*************************************************************
//*******************CustomerData Class************************
//*************************************************************

class CustomerData :public PersonData {
private:
	int customerNumber;
	bool mailingList;
public:
	CustomerData();
	~CustomerData();
	CustomerData(string, string, string, string, string, string, string,int, bool);
	int getCustomerNumber();
	bool getMailingList();
	void setCustomerNumber(int);
	void setMailingList(bool);
};

CustomerData::CustomerData():PersonData() {

}

CustomerData::~CustomerData() {

}
	
CustomerData::CustomerData(string last, string first, string address, string city, string state, string zip, string phone, int cusNum, bool mList)
	:PersonData(last, first, address, city, state, zip, phone) {
	customerNumber = cusNum;
	mailingList = false;
}

int CustomerData::getCustomerNumber() {
	return customerNumber;
}

bool CustomerData::getMailingList() {
	return mailingList;
}

void CustomerData::setCustomerNumber(int cNum) {
	customerNumber = cNum;
}

void CustomerData::setMailingList(bool mail) {
	mailingList = mail;
}

//*************************************************************
//*****************End CustomerData Class**********************
//*************************************************************

//prototype
void displayCustomer(CustomerData C);

int main()
{
	//creating object
	CustomerData customer1("Sun", "Chris", "16700 Golf Club Dr", "Crosby", "Texas", "77532", "936-662-1001", 1, true);
	displayCustomer(customer1);	//printing out customer information
	return 0;
}

//print out customer data function
void displayCustomer(CustomerData C) {
	cout << "Customer Number: " << C.getCustomerNumber() << endl;
	cout << "Last Name: " << C.getLastName() << endl;
	cout << "First Name: " << C.getFirstName() << endl;
	cout << "Address: " << C.getAddress() << endl;
	cout << "City: " << C.getCity() << endl;
	cout << "Zip" << C.getZip() << endl;
	cout << "Phone Number: " << C.getPhone() << endl;
	cout << "Mailing List? " << C.getMailingList() << endl;
}