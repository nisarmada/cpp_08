#pragma once

#include <string>
#include <algorithm>
#include <iostream>
#include <exception>
#include <deque>

template<typename T>
class MutantStack {
	private:
		std::deque<T> deque_;
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& (const MutantStack& other);

		void push(const T& value);
		void pop();
		void top();
		void size();
		bool empty();
};