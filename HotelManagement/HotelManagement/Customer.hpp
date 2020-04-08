#pragma once
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
};