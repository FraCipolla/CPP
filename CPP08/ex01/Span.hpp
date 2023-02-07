/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:00:27 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/07 12:05:56 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>

class Span;

class Span
{
    private:
        unsigned int        _max_values;
        std::vector<int>    _values;

    public:
        // Coplien
        Span(unsigned int const & N);
        Span(const Span&);
        virtual ~Span();
        Span &operator=(const Span& op);

        // Getter - Setter

        // Additionnal
        void        addNumber(int);
        long        shortestSpan(void);
        long        longestSpan(void);

        template < class Iterator >
        void        addNumber(Iterator begin, Iterator end)
        {
            if (end - begin <= _max_values)
                std::copy(begin, end, std::back_inserter(this->_values));
            else
            {
                throw(NotEnoughSpace());
            }
            std::sort(this->_values.begin(), this->_values.end());
        }

        // Exceptions
        class NotEnoughSpace : public std::exception
        {
            virtual const char* what() const throw() { return ("Not enough space in the span to add the range."); }
        };


        class Full : public std::exception
        {
            virtual const char* what() const throw() { return ("Span is full."); }
        };

        class CantSpan : public std::exception
        {
            virtual const char* what() const throw() { return ("Span have not enough values to do a span."); }
        };
};

#endif