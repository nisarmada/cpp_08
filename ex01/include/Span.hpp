#pragma once

#include <algorithm>
#include <iostream>
#include <string>
#include <exception>
#include <vector>

class Span {
	private:
		size_t capacity;
		std::vector<int> vector;
	public:
		Span();
		Span(size_t capacity);
		~Span();

		Span(const Span& other);
		Span& operator=(const Span& other);

		void addNumber(const int number);
		void addMultiple(const size_t amount) {
			
		};

		size_t shortestSpan();
		size_t longestSpan();
};