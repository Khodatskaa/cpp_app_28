#include "Time.h"

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int hours, int minutes, int seconds) : hours(hours), minutes(minutes), seconds(seconds) {}

void Time::increment() {
	seconds++;
	if (seconds >= 60) {
		seconds = 0;
		minutes++;
		if (minutes >= 60) {
			minutes = 0;
			hours++;
			if (hours >= 24) {
				hours = 0;
			}
		}
	}
}

Time Time::operator++() {
	increment();
	return *this;
}

Time Time::operator++(int) {
	Time temp = *this;
	increment();
	return temp;
}

bool Time::operator!=(const Time& other) const {
	return hours != other.hours || minutes != other.minutes || seconds != other.seconds;
}

bool Time::operator==(const Time& other) const {
	return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

bool Time::operator>(const Time& other) const {
	if (hours > other.hours) {
		return true;
	}
	else if (hours == other.hours) {
		if (minutes > other.minutes) {
			return true;
		}
		else if (minutes == other.minutes) {
			if (seconds > other.seconds) {
				return true;
			}
		}
	}
	return false;
}

bool Time::operator<(const Time& other) const {
	if (hours < other.hours) {
		return true;
	}
	else if (hours == other.hours) {
		if (minutes < other.minutes) {
			return true;
		}
		else if (minutes == other.minutes) {
			if (seconds < other.seconds) {
				return true;
			}
		}
	}
	return false;
}

Time& Time::operator=(const Time& other) {
	hours = other.hours;
	minutes = other.minutes;
	seconds = other.seconds;
	return *this;
}

Time& Time::operator+=(int seconds) {
	for (int i = 0; i < seconds; i++) {
		increment();
	}
	return *this;
}

Time& Time::operator-=(int seconds) {
	for (int i = 0; i < seconds; i++) {
		if (this->seconds == 0) {
			this->seconds = 59;
			if (this->minutes == 0) {
				this->minutes = 59;
				if (this->hours == 0) {
					this->hours = 23;
				}
				else {
					this->hours--;
				}
			}
			else {
				this->minutes--;
			}
		}
		else {
			this->seconds--;
		}
	}
	return *this;
}

Time Time::operator()() const {
	return Time(hours, minutes, seconds);
}

std::istream& operator>>(std::istream& input, Time& time) {
	input >> time.hours >> time.minutes >> time.seconds;
	return input;
}

std::ostream& operator<<(std::ostream& output, const Time& time) {
	output << time.hours << ":" << time.minutes << ":" << time.seconds;
	return output;
}
