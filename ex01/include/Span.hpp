#pragma once

#include <algorithm>
#include <iostream>
#include <string>
#include <exception>
#include <limits>

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

		size_t size();
		void addNumber(const int number);
		template<typename Iterator>
		void addMultiple(Iterator begin, Iterator end) {
			size_t distance = std::distance(begin, end);

			if (vector.size() + distance > capacity) {
				throw(std::out_of_range("AddMultiple: can't add because the result would exceed capacity\n"));
			}
			else {
				for (; begin != end; begin++) {
					vector.push_back(*begin);
				}
			}
		};

		size_t shortestSpan();
		size_t longestSpan();
};