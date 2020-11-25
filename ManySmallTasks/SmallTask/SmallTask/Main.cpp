#include<iostream>
#include <string>
#include <vector>
#include <set>
#include "mathExample.hpp"
#include "timeExample.hpp"

//std::string markMaths(std::vector<std::string> array);
//bool isEquasionEqualResult(std::string equasion);
//std::string getMissingLetters(std::string s);
unsigned int doubledPay(unsigned int n);
int main() {
	
	//Quadratic Equation//
	//MathExample math;
	//std::cout << math.quadraticFunction() << std::endl; 

	//Convert Minutes into Seconds//
	//Convert Hours into Seconds//
	//TimeExample time;
	//Math Marking
	//std::cout << time.ConvertMinutesToSeconds(time.ConvertHouersToMinutes(4)) << std::endl;
	//std::vector<std::string> vector = { "2+3=5", "4+4=9", "3-1=2" };
	//Missing Letters
	//std::cout << markMaths(vector) << std::endl;
	///std::cout<<getMissingLetters("");
	//Doubled Pay
	std::cout << doubledPay(3) << std::endl;
	std::cout << "cos" << std::endl;
	return 0;
}




/*
* Doubled Pay
* An employee working at a very bizzare company, earns one penny on their first day. 
However, for every day that passes, their base amount doubles, so they earn two pennies on the second 
day and four pennies on the third day (totalling 7 pennies).
Given a number of days, return how many pennies the employee accumulates.
*/
unsigned int doubledPay(unsigned int n) {
	unsigned int result = 0;
	unsigned int amount = 1;
	unsigned int multiplicatedAmound = 2;
	result = amount;
	for (int i = 1; i < n; i++) {
		amount *= multiplicatedAmound;
		result += amount;
	}

	return result; 
}


/*
* Missing Letters
//Given a string containing unique letters, return a sorted string with the letters that don't appear in the string.
std::string getMissingLetters(std::string s) {
	std::string str("abcdefghijklmnopqrstuvwxyz");
	const char *tab = str.c_str();
	std::string result = "";
	std::set<char> setsChar;
	std::set<char>::iterator iterator;

	for (int i = 0; i < s.size(); i++) {
		setsChar.emplace(s.at(i));
	}

	iterator = setsChar.begin();

	for (int i = 0; i < str.size(); i++) {
		if (iterator != setsChar.end() && *iterator == tab[i]) {
			iterator++;
		}
		else {
			result += tab[i];
		}
	}		
	return result;
}
*/



/*
*  Math Marking
* 
* std::string markMaths(std::vector<std::string> array) {
	int positivResult = 0;
	std::string answer = "";
	for (int i = 0; i < array.size(); i++) {
		if (isEquasionEqualResult(array.at(i))) positivResult++;
	}
	answer = std::to_string((MathExample::ownRoundMethod(positivResult * 100.00 / array.size(),5)));
	answer.append("%");
	return answer;
}
std::string removeSpace(std::string element) {
	std::string str = "";
	for (int i = 0; i < element.length(); i++) {
		char c = element.at(i); 
		if (c == 32) continue;
		str += c;
	}
	return str;
}

bool isEquasionEqualResult(std::string equasion) {
	int lefSite = 0;
	int  rightSite = 0;
	char lastCharacter = '+';
	bool flag = false;
	unsigned int specialCharacter = 0;
	char c;
	int value = 0;
	
	for (int i = 0; i < equasion.size(); i++) {
		try {
			c = equasion.at(i);
			if ((c == '+' || c == '-' || c == '=') && (i != specialCharacter))
			{
				value = std::stoi(equasion.substr(specialCharacter, i - specialCharacter));
				specialCharacter = i + 1 ;
				if (lastCharacter == '+') {
					lefSite += value;
				}
				else if (lastCharacter == '-') {
					lefSite -= value;
				}
				lastCharacter = c;
				if (c == '=') {					
					value = std::stoi(equasion.substr(specialCharacter, equasion.size() - specialCharacter));
					flag = (lefSite == value);
					break;
				}
			}
		}
		catch (...) {
			std::cout << "Execption" << std::endl;
		}
	}
	return flag;
}
*/
/*
*

**/
