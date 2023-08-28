#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(const T *addr, size_t size, void (*operation)(T const&))
{
	if (!addr || !operation)
		return ;
	for (size_t i = 0; i < size; i++)
		operation(addr[i]);
}

#endif
