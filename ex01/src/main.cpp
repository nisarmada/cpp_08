#include "../include/Span.hpp"

int main() {
	Span span(10);
	int	 array[11] = {1, -10, 2, 23, 54, 13, 27, 87, 43, 99, 100};

	try {
		span.addMultiple(array, array + 10);
 		std::cout << "Span populated successfully." << std::endl;
        std::cout << "Size of span: " << span.size() << std::endl;
		
		std::cout << "Shortest span is " << span.shortestSpan() << std::endl;
		std::cout << "Longest span is " << span.longestSpan() << std::endl;
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}