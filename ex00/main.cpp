#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);

        int valueToFind = 3;
		
		std::vector<int>::iterator result = easyfind(vec, valueToFind);

        std::cout << "Value found at index: " << std::distance(vec.begin(), result) << std::endl;
    } catch (const std::exception & e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}