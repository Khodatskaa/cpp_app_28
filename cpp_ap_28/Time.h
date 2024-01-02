#ifndef Time_h
#define Time_h

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int hours, int minutes, int seconds);

    void increment();

    Time operator++();      
    Time operator++(int);   
    bool operator!=(const Time& other) const;
    bool operator==(const Time& other) const;
    bool operator>(const Time& other) const;
    bool operator<(const Time& other) const;
    Time& operator=(const Time& other);
    Time& operator+=(int seconds);
    Time& operator-=(int seconds);
    Time operator()() const; 

    friend std::istream& operator>>(std::istream& input, Time& time);
    friend std::ostream& operator<<(std::ostream& output, const Time& time);
};

#endif
