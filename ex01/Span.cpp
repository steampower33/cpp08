#include "Span.hpp"

Span::Span() : _v(0, 0) {}

Span::Span(unsigned int n) : _v(0, 0) {
	_v.reserve(n);
}

Span::Span(const Span& other) : _v(0, 0) {
	unsigned int otherLen = other.getVector().size();
	_v.reserve(otherLen);
	for (size_t i = 0; i < otherLen; i++)
	{
		_v.push_back(other.getVector()[i]);
	}
}

std::vector<int> Span::getVector() const {
	return _v;
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
	{
		unsigned int otherLen = other.getVector().size();
		_v.assign(otherLen, 0);
		for (size_t i = 0; i < otherLen; i++)
		{
			_v[i] = other.getVector()[i];
		}
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int num) {
	// std::cout << "size: " << _v.size() << ", capacity: " << _v.capacity() << std::endl;
	if (_v.size() == _v.capacity())
		throw std::out_of_range("Out Of Range");
	_v.push_back(num);
}

int Span::shortestSpan()
{
    if(_v.size() <= 1)
        throw std::runtime_error("no span can be found !!");
    std::vector<int> sorted = _v;
    std::sort(sorted.begin(), sorted.end());
    int shortest = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); i++)
        shortest = std::min(shortest, sorted[i] - sorted[i - 1]);
    return shortest;
}

int Span::longestSpan()
{
    if(_v.size() <= 1)
        throw std::runtime_error("no span can be found !!");
    std::vector<int> sorted = _v;
    std::sort(sorted.begin(), sorted.end());
    int longest = sorted[sorted.size() - 1] - sorted[0];
    return longest;
}
