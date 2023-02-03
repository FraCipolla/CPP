#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & src);
		virtual ~Point();
		Point&	operator=(Point const & rhs);
		bool	operator==(Point const & rhs) const;
		Fixed	getX();
		Fixed	getY();
};

#endif
