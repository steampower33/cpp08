#include "Span.hpp"

int main() {
	srand(time(NULL));

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
	try
	{
    	sp.addNumber(21);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::vector<int> nums;
	nums.reserve(10000);
	for (int i = 0; i < 10000; i++)
		nums.push_back(rand());
    
	Span sp2 = Span(10000);
	try
	{
		sp2.addNumbers(nums);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	const std::vector<int>& sp2Vector = sp2.getVector();
	std::vector<int>::const_iterator start = sp2Vector.cbegin();
	std::vector<int>::const_iterator end = sp2Vector.cend();
	std::cout << "Distance: " << std::distance(start, end) << std::endl;
	std::cout << "Capacity: " << sp2Vector.capacity() << std::endl;
	while (start < end)
	{
		std::cout << *start << " ";
		++start;
	}
	std::cout << std::endl;

    return 0;
}