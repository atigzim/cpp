#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
	private:
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array operator=(const Array &other);
		~Array();
};

Array::Array()
{
}

Array::~Array()
{
}


#endif