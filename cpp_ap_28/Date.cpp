#include "Date.h"

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 1900;
}

Date::Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::increaseDay() {
	this->day++;
}

Date Date::operator+(int days) const {
	Date result = *this;
	result += days;
	return result;
}

Date Date::operator-(int days) const {
	Date result = *this;
	result -= days;
	return result;
}

bool Date::operator!=(const Date& other) const {
	return !(*this == other);
}

bool Date::operator==(const Date& other) const {
	return this->day == other.day &&
		this->month == other.month &&
		this->year == other.year;
}

bool Date::operator>(const Date& other) const {
	if (this->year > other.year) {
		return true;
	}
	else if (this->year < other.year) {
		return false;
	}
	else {
		if (this->month > other.month) {
			return true;
		}
		else if (this->month < other.month) {
			return false;
		}
		else {
			if (this->day > other.day) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}

bool Date::operator<(const Date& other) const {
	return !(*this > other) && !(*this == other);
}

Date& Date::operator+=(int days) {
	for (int i = 0; i < days; i++) {
		this->increaseDay();
	}
	return *this;
}

Date& Date::operator-=(int days) {
	for (int i = 0; i < days; i++) {
		this->day--;
	}
	return *this;
}

Date Date::operator()() const {
	return *this;
}	

istream& operator>>(istream& input, Date& date) {
	input >> date.day >> date.month >> date.year;
	return input;
}

ostream& operator<<(ostream& output, const Date& date) {
	output << date.day << "." << date.month << "." << date.year;
	return output;
}
