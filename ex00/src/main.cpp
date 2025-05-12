#include "../include/easyfind.hpp"

int main () {
	std::vector<int> vector = {1, -10, 54, 8, 12};
	std::list<int> list = {1, -10, 54, 8, 12};

	std::vector<int> emptyVector = {};
	int searchValue = 54;
	typename std::vector<int>::iterator vectorResult = ::easyfind(vector, 54);
	if (vectorResult != vector.end()) { // successful test
		std::cout << "We found " << searchValue << " at position " \
			<< std::distance(vector.begin(), vectorResult) << std::endl;
	}
	else {
		std::cout << searchValue << " was not found in the vector" << std::endl;
	}
	
	typename std::list<int>::iterator listResult = easyfind(list, searchValue);
	if (listResult != list.end()) { // successful test
		std::cout << "We found " << searchValue << " at position " \
			<< std::distance(list.begin(), listResult) << std::endl;
	}
	else {
		std::cout << searchValue << " was not found in the list" << std::endl;
	}

	searchValue = 2147483647;
	vectorResult = easyfind(vector, searchValue);
	if (vectorResult != vector.end()) { // should not work
		std::cout << "We found " << searchValue << " at position " \
			<< std::distance(vector.begin(), vectorResult) << std::endl;
	}
	else {
		std::cout << searchValue << " was not found in the vector" << std::endl;
	}

	// empty vector test
	vectorResult = easyfind(emptyVector, searchValue);
	if (vectorResult != emptyVector.end()) { // should not work
		std::cout << "We found " << searchValue << " at position " \
			<< std::distance(emptyVector.begin(), vectorResult) << std::endl;
	}
	else {
		std::cout << searchValue << " was not found in the vector" << std::endl;
	}
}