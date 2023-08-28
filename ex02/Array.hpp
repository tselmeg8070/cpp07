#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	private:
		T				*_elements;
		unsigned int	_size;
	public:
		Array() : _elements(0), _size(0)
		{}

		Array(unsigned int n) : _size(n)
		{
			_elements = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_elements[i] = T();
			}
		}

		Array(const Array &t) : _size(t._size)
		{
			_elements = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_elements[i] = t._elements[i];
			}
		}

		Array& operator=(const Array &t)
		{
			if (this != &t) {
				delete[] _elements;
				_size = t._size;
				_elements = new T[_size];
				for (unsigned int i = 0; i < _size; ++i) {
					_elements[i] = t._elements[i];
				}
			}
			return (*this);
		}

		~Array()
		{
			delete[] _elements;
		}

		T& operator[](unsigned int index)
		{
			if (index >= _size) {
				throw std::out_of_range("Index out of range");
			}
			return _elements[index];
		}

		unsigned int size() const {
			return (_size);
		}
};

#endif
