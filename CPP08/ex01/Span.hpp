#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_storage;
		Span();
	public:
		Span(unsigned int n);
		Span(Span const & src);
		Span&	operator=(Span const & rhs);
		~Span();
		void						addNumber(int n);
		int							shortestSpan();
		int							longestSpan();
		std::vector<int>&			getVector();
		void						crazyAdding();
		class AlreadyFilled : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span is already filled");
				}
		};
		class OnlyOneStored : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span contains only one element. Can't find span");
				}
		};
		class SpanIsEmpty : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span is empty. Can't find span");
				}
		};
};

#include "Span.tpp"

#endif
