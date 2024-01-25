#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template <typename T>
typename T::iterator easyfind(T& container, int target) {
	typename T::iterator iter = std::find(container.begin(), container.end(), target);
	if (iter == container.end())
		throw std::out_of_range("Target Doesn't Exist In Container.");
	return iter;
}

#endif