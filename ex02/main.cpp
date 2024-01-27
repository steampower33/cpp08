#include "MutantStack.hpp"
#include <vector>

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

	std::vector<int> v;
	v.push_back(5);
	v.push_back(10);
	v.push_back(15);
	v.push_back(20);
	v.push_back(25);
	std::cout << "top: " << v.at(v.size() - 1) << std::endl;
	std::cout << "size: " << v.size() << std::endl;
	v.pop_back();
	std::cout << "size: " << v.size() << std::endl;
	if (!v.empty())
		std::cout << "vector is not empty" << std::endl;
	
	std::cout << "-----------------------------------------------" << std::endl;
	
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
	std::cout << "<< vector iterator >>" << std::endl;
	std::vector<int>::iterator vit = v.begin();
	std::vector<int>::iterator vite = v.end();
	while (vit != vite)
	{
		std::cout << *vit << std::endl;
		++vit;
	}

	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "<< reverse_iterator >>" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "<< vector reverse_iterator >>" << std::endl;
	std::vector<int>::reverse_iterator vrit = v.rbegin();
	std::vector<int>::reverse_iterator vrite = v.rend();
	while (vrit != vrite)
	{
		std::cout << *vrit << std::endl;
		++vrit;
	}

	return 0;
}