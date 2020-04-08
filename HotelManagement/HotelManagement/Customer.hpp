#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <ctime>

struct Date {
	int year;
	int month;
	int day;
};

class Customer {
private:
	std::string firstName;
	std::string lastName;
	std::string address;
	std::string phoneNumber;
	Date from;
	Date to;
	double payment;
public:
	Customer(const std::string& fName, const std::string& lName, const std::string& addr, const std::string& phone, const double& payment, const Date& from, const 
	Date& to) : firstName(fName), lastName(lName), address(addr), phoneNumber(phone), from(from), to(to), payment(payment){}
	Date getTimeRemainingTillCheckout() {
		time_t now = time(0);
		tm *ltm = localtime(&now);
		Date toReturn{ 1900 + ltm->tm_year , 1 + ltm->tm_mon ,  ltm->tm_mday };
		return toReturn;
	}
	std::string getFirstName() {
		return firstName;
	}
	std::string getLastName() {
		return lastName;
	}
	std::string getAddress() {
		return address;
	}
	std::string getPhoneNumber() {
		return phoneNumber;
	}
	Date getDateFrom() {
		return from;
	}
	Date getDateTo() {
		return to;
	}
	double getPayment() {
		return payment;
	}
	void setFirstName(const std::string& s) {
		firstName = s;
	}
	void setLastName(const std::string& s) {
		lastName = s;
	}
	void setAddress(const std::string& s) {
		address = s;
	}
	void setPhoneNumber(const std::string& s) {
		phoneNumber = s;
	}
	void setDateFrom(const Date& from) {
		this->from = from;
	}
	void setDateTo(const Date& to) {
		this->to = to;
	}
	void setPayment(const double& s) {
		payment = s;
	}
	~Customer(){}
};