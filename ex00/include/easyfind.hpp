#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>

template<typename T>
typename T::iterator easyfind(T& container, int n) {
	typename T::iterator iterator;

	iterator = std::find(container.begin(), container.end(), n);
	if (iterator != container.end())
		return (iterator);
	else
		return (container.end());
}