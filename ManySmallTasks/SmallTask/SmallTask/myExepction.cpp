#pragma once
#include <exception>

class DeltaUnderZeroExepction : public std::exception {
public:
	char const* what() const throw() override {
		return "Delta is under zero :(";
	}
};