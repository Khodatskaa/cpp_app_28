#ifndef Date_h
#define Date_h

#include <iostream>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;

public:
    Date();
    Date(int day, int month, int year);

    void increaseDay();

    Date operator+(int days) const;
    Date operator-(int days) const;
    bool operator!=(const Date& other) const;
    bool operator==(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;
    Date& operator+=(int days);
    Date& operator-=(int days);
    Date operator()() const; 

    friend istream& operator>>(std::istream& input, Date& date);
    friend ostream& operator<<(std::ostream& output, const Date& date);
};

#endif 
