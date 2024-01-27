#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(10);
	mstack.push(15);
	mstack.push(20);
	mstack.push(25);
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	if (!mstack.empty())
		std::cout << "mstack is not empty" << std::endl;

	std::cout << "<< iterator >>" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "<< reverse_iterator >>" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "<< const_iterator >>" << std::endl;
	MutantStack<int> constMstack;
	constMstack.push(10);
	constMstack.push(20);
	constMstack.push(30);
	constMstack.push(40);
	constMstack.push(50);
	MutantStack<int>::const_iterator cit = constMstack.cbegin();
	MutantStack<int>::const_iterator cite = constMstack.cend();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << "<< const_reverse_iterator >>" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = constMstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = constMstack.crend();
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}

	return 0;
}