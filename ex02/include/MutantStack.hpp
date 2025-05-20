#pragma once

#include <string>
#include <algorithm>
#include <iostream>
#include <exception>
#include <deque>
#include <list>

template<typename T>
class MutantStack {
	private:
		std::deque<T> deque_;
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack& other) : deque_(other.deque_) {};
		MutantStack& operator=(const MutantStack& other) {
			if (this != &other) {
				deque_ = other.deque_;
			}
			return (*this);
		};

		void	push(const T& value) {
			deque_.push_back(value);
		};
		void	pop() {
			deque_.pop_back();
		};
		T&		top() {
			return (deque_.back());
		};
		const T& top() const {
			return (deque_.back());
		}
		size_t	size() {
			return (deque_.size());
		};
		bool	empty() {
			return (deque_.empty());
		};
		
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator constIterator;

		iterator begin() noexcept {
			return (deque_.begin());
		};

		constIterator begin() const noexcept {
			return (deque_.cbegin());
		};

		iterator end() noexcept {
			return (deque_.end());
		};

		constIterator end() const noexcept {
			return (deque_.cend());
		};

		operator std::stack<T>() const {
			return (std::stack<T>(deque_));
		};
};