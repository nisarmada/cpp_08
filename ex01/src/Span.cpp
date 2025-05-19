#include "../include/Span.hpp"

Span::Span() : capacity(0), vector() {}

Span::Span(size_t capacity) : capacity(capacity), vector() {}

Span::~Span() {}

Span::Span(const Span& other) : capacity(other.capacity), vector(other.vector) {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		capacity = other.capacity;
		vector = other.vector;
	}
	return (*this);
}

size_t Span::size() {
	return (vector.size());
}

void Span::addNumber(const int number) {
	if (vector.size() < capacity)
		vector.push_back(number);
	else
		throw std::out_of_range("addNumber number is out of bounds");
}

size_t Span::shortestSpan() {
	if (vector.size() <= 2) {
		throw std::runtime_error("Error: Size of the vector is less or equal to 2\n");
	}
	std::vector<int> sortedVector = vector;
	sort(sortedVector.begin(), sortedVector.end());
	size_t minDistance = INT_MAX;
	for (auto current = sortedVector.begin(); std::next(current) != sortedVector.end(); ++current) {
		auto next = std::next(current);
		size_t currentDistance = static_cast<size_t>(*next - *current);
		if (currentDistance < minDistance)
			minDistance = currentDistance;
	}
	return (minDistance);
}

size_t Span::longestSpan() {
	if (vector.size() <= 2) {
		throw std::runtime_error("Error: Size of the vector is less or equal to 2\n");
	}
	std::vector<int> sortedVector = vector;
	sort(sortedVector.begin(), sortedVector.end());
	auto smallest = sortedVector.begin();
	auto biggest = sortedVector.end() - 1;
	size_t maxDistance = static_cast<size_t>(*biggest - *smallest);
	return (maxDistance);
}

// template<typename Iterator>
// void Span::addMultiple(Iterator begin, Iterator end) {

// 	if (size + amount > capacity)
// 		throw (std::out_of_range("addMultiple: can't add because the result would exceed capacity\n"));
// 	for (size_t i = size; i < amount; i++) {
// 		vector.push_back(static_cast<int>(i));
// 	}
// }