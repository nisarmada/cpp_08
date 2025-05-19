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
	//test with random 15000 numbers
	std::vector<int> test(15000);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(-4500, 15000);
	std::generate(test.begin(), test.end(), [&]() {return distrib(gen) ; });

	Span randomSpan(15000);
	try {
		randomSpan.addMultiple(test.begin(), test.end());
		std::cout << "Span filled with 15,000 random numbers." << std::endl;
        std::cout << "Shortest span: " << randomSpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << randomSpan.longestSpan() << std::endl;
    } catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}