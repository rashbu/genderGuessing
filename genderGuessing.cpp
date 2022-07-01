#include <iostream>

int main() {

	std::string name;

	std::cout << "Write your name: ";
	std::cin >> name;

	int nameLength = name.length();
	
	if (name[nameLength - 1] == 'a') {
		std::cout << "I'm thinking that you are female";
	}
	else {
		std::cout << "I'm thinking that you are male";
	}

	return 0;

}