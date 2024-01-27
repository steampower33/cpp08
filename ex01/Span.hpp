#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

class Span {
private:
	std::vector<int> _v;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	Span& operator=(const Span& other);
	unsigned int getSize() const;
	const std::vector<int>& getVector() const;
	int shortestSpan();
	int longestSpan();
	~Span();
	void addNumber(unsigned int num);
	
	template<typename T>
	void addNumbers(T& container) {
		typename T::difference_type dist = std::distance(container.begin(), container.end());
		if (dist > static_cast<long>(_v.capacity() - _v.size()))
			throw std::range_error("Can Not Push This Container In Vector");
		typename T::iterator it = container.begin();
		while (it < container.end())
		{
			_v.push_back(*it);
			it++;
		}
	}
};

#endif