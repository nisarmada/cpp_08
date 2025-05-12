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

void Span::addNumber(const int number) {
	if (vector.size() < capacity)
		vector.push_back(number);
	else
		throw std::out_of_range("addNumber number is out of bounds");
}

void Span::addMultiple(const size_t amount) { // this is wrong I might need to change it to a template so it takes into account how many elements aready exist in the vector
	size_t size = vector.size();

	if (size + amount > capacity)
		throw (std::out_of_range("addMultiple: can't add because the result would exceed capacity\n"));
	for (size_t i = size; i < amount; i++) {
		vector.push_back(static_cast<int>(i));
	}
}